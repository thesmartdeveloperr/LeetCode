class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> pref(m+1,vector<int>(n+1));
        for(int i=1;i<=m;++i)
            for(int j=1;j<=n;++j)
                pref[i][j]=mat[i-1][j-1]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                int r1=(i-k>=0)?i-k:0;
                int c1=(j-k>=0)?j-k:0;
                int r2=(i+k<m)?i+k:m-1;
                int c2=(j+k<n)?j+k:n-1;
                r1++; c1++; r2++; c2++;
                mat[i][j] = pref[r2][c2] - pref[r2][c1-1] - pref[r1-1][c2] + pref[r1-1][c1-1];
            }
        }
        return mat;
    }
};