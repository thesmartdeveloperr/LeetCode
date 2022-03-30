class Solution {
public:
    // complexity will be nlogn..
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();++i){
            int low=0,high=matrix[i].size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        return false;
    }
};