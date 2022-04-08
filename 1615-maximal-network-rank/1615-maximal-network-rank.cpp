class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int mx=0;
        vector<vector<int>> adj_mat(n,vector<int>(n,0));
        map<int,vector<int>> adj;
        for(auto i:roads){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            adj_mat[i[0]][i[1]]=1;
            adj_mat[i[1]][i[0]]=1;
        }
        for(int i=0;i<adj.size();++i){
            for(int j=i+1;j<adj.size();++j){
                int connect=adj_mat[i][j]==1?1:0;
                int val=adj[i].size()+adj[j].size()-connect;
                mx=mx>val?mx:val;
            }
        }
        return mx;
    }
};