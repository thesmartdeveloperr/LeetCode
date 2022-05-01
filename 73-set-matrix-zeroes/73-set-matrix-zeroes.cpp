class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int,bool> mp1,mp2;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(matrix[i][j]==0){
                    mp1[i]=true;
                    mp2[j]=true;
                }
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(mp1.find(i)!=mp1.end() or mp2.find(j)!=mp2.end())
                    matrix[i][j]=0;
            }
        }
    }
};