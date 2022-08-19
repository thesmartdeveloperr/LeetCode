class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // vector<vector<int>> dp(n,vector<int>(m));
        for(int i=n-1;i>=0;--i){
            for(int j=m-1;j>=0;--j){
                if(i==n-1 and j==m-1)
                    continue;
                else if(i==n-1)
                    grid[i][j]=grid[i][j]+grid[i][j+1];
                else if(j==m-1)
                    grid[i][j]=grid[i][j]+grid[i+1][j];
                else
                    grid[i][j]=grid[i][j]+min(grid[i][j+1],grid[i+1][j]);
            }
        }
        return grid[0][0];
    }
};