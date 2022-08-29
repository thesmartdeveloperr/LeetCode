class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]=='0')
            return;
        grid[i][j]='0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]=='1'){
                    res++;
                    dfs(grid,i,j);
                }
            }
        }
        return res;
    }
};