class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // map<int,vector<int>> adj;
        vector<int> adj[100007];
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<100007;++i){
            if(adj[i].size()==edges.size())
                return i;
        }
        return -1;
    }
};