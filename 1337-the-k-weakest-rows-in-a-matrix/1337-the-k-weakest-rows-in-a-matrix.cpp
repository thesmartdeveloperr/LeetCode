class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> soldiers;
        vector<int> res;
        map<int,vector<int>> mp;
        for(int i=0;i<mat.size();++i){
            int ct=0;
            for(int j=0;j<mat[i].size();++j)
                if(mat[i][j]==1)
                    ct++;
            mp[ct].push_back(i);
        }
        for(auto i:mp){
            for(auto j:i.second)
                soldiers.push_back(j);
        }
        for(int i=0;i<k;++i)
            res.push_back(soldiers[i]);
        return res;
    }
};