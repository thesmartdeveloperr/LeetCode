class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
        while(i>=0 and i<m and j>=0 and j<n){
            if(matrix[i][j]>target)
                j--;
            else if(matrix[i][j]<target)
                i++;
            else
                return true;
        }
        return false;
    }
};