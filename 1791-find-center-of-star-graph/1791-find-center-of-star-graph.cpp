class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int res=0;
        map<int,vector<int>> adj;
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(auto i:adj)
            res=res>i.second.size()?res:i.second.size();
        for(auto i:adj){
            if(i.second.size()==res)
                return i.first;
        }
        return -1;
    }
};