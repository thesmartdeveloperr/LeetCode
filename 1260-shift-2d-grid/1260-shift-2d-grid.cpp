class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> flat;
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[0].size();++j)
                flat.push_back(grid[i][j]);
        // now we have to shift k times.
        int n=flat.size();
        k=k%n;
        vector<int> shifted;
        for(int i=n-k;i<n;++i)
            shifted.push_back(flat[i]);
        for(int i=0;i<n-k;++i)
            shifted.push_back(flat[i]);
        int m=0;
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[0].size();++j)
                grid[i][j]=shifted[m++];
        return grid;
    }
};