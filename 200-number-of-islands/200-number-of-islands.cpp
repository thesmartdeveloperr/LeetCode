class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<int>>& visited,int i,int j){
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or visited[i][j] or grid[i][j]=='0')
            return;
        visited[i][j]=1;
        dfs(grid,visited,i+1,j);
        dfs(grid,visited,i-1,j);
        dfs(grid,visited,i,j+1);
        dfs(grid,visited,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]=='1' and !visited[i][j]){
                    res++;
                    dfs(grid,visited,i,j);
                }
            }
        }
        return res;
    }
};