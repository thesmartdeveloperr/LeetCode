class Solution {
private:
    void dfs(vector<vector<int>>& land, vector<vector<bool>> &oceanToLand, int i, int j, int rows, int cols) {
        if(i < 0 || i >= rows || j < 0 || j >= cols || oceanToLand[i][j] == true)
            return;
        oceanToLand[i][j] = true;
        if(i + 1 < rows && land[i + 1][j] >= land[i][j])
            dfs(land, oceanToLand, i + 1, j, rows, cols);
        if(i - 1 >= 0 && land[i - 1][j] >= land[i][j])
            dfs(land, oceanToLand, i - 1, j, rows, cols);
        if(j + 1 < cols && land[i][j + 1] >= land[i][j])
            dfs(land, oceanToLand, i, j + 1, rows, cols);
        if(j - 1 >= 0 && land[i][j - 1] >= land[i][j])
            dfs(land, oceanToLand, i, j - 1, rows, cols);
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        int rows = heights.size();
        int cols = heights[0].size();
        
        vector<vector<bool>> pacificToLand(rows, vector<bool>(cols, false));
        vector<vector<bool>> atlanticToLand(rows, vector<bool>(cols, false));
        for(int i = 0; i < rows; ++i) {
            dfs(heights, pacificToLand, i, 0, rows, cols);
            dfs(heights, atlanticToLand, i, cols - 1, rows, cols);
        }
        for(int i = 0; i < cols; ++i) {
            dfs(heights, pacificToLand, 0, i, rows, cols);
            dfs(heights, atlanticToLand, rows - 1, i, rows, cols);
        }
        for(int i = 0; i < rows; ++i)
            for(int j = 0; j < cols; ++j)
                if(pacificToLand[i][j] && atlanticToLand[i][j])
                    ans.push_back({i, j});
        return ans;
    }
};