class Solution{
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int mx=0;
        vector<unordered_set<int>> adj(n);
        for(auto i:roads)
            adj[i[0]].insert(i[1]),adj[i[1]].insert(i[0]);   
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                int roads=adj[i].size()+adj[j].size();
                if(adj[j].count(i))
                    roads--;
                mx=max(mx,roads);
            }   
        }
        return mx;
    }
};