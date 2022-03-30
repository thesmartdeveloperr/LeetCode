class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0,c=matrix[0].size()-1;
        while(r>=0 and r<matrix.size() and c>=0 and c<matrix[0].size()){
            if(matrix[r][c]==target)
                return true;
            else if(matrix[r][c]>target)
                c--;
            else
                r++;
        }
        return false;
    }
};