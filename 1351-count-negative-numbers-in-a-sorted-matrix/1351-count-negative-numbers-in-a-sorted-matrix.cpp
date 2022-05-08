class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // we can do a O(NlogN) solution...
        int cnt=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;++i){
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(grid[i][mid]>=0){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            cnt+=(n-1-high);
        }
        return cnt;
    }
};