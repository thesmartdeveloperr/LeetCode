class Solution {
public:
    unordered_map<string,vector<pair<string,double>>> adj;
    unordered_map<string,bool> visited;
    double ans;
    bool dfs(string start,string end,double prod){
        
        if(start==end and adj.find(start)!=adj.end()){
            ans=prod;
            return true;
        }
        bool val=false;
        visited[start]=true;
        
        for(int i=0;i<adj[start].size();++i){
            if(!visited[adj[start][i].first]){
                val=dfs(adj[start][i].first,end,prod*adj[start][i].second);
                if(val)
                    break;
            }
        }
        
        visited[start]=false;
        return val;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res(queries.size());
        int n=equations.size(),m=queries.size();
        for(int i=0;i<n;++i){
            adj[equations[i][0]].push_back({equations[i][1],values[i]});
            adj[equations[i][1]].push_back({equations[i][0],1/values[i]});
            visited[equations[i][0]]=false;
            visited[equations[i][1]]=false;
        }
        for(int i=0;i<m;++i){
            ans=1;
            bool hasPath=dfs(queries[i][0],queries[i][1],1);
            if(hasPath)
                res[i]=ans;
            else
                res[i]=-1;
        }
        return res;
    }
};