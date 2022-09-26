class Solution {
public:
    int equals[26][26] = {0};
    vector<int> graph[26];
    void dfs(int cur, int root,  bool vis[]) {
        if(vis[cur]) return;
        vis[cur] = true;
        
        equals[root][cur] = 1;
        
        for(int child : graph[cur]) {
            dfs(child, root, vis);
        }
    }
     
    bool equationsPossible(vector<string>& equations) {
        for(const auto &equation : equations) {
            if(equation[1] == '!') continue;
            
            int u = equation[0] - 'a';
            int v = equation[3] - 'a';
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }   
        for(int i = 0; i < 26; i ++) {
            bool vis[26] = {0};
            dfs(i, i, vis);
        }
        for(auto &equation : equations) {
            if(equation[1] == '=') continue;
            if(equals[equation[0]-'a'][equation[3]-'a']) return false;
        }   
        return true;
    }
};