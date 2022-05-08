class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> first_col;
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();++i)
            first_col.push_back(matrix[i][n-1]);
        int row=lower_bound(first_col.begin(),first_col.end(),target)-first_col.begin();
        if(row>=matrix.size())
            return false;
        int col=lower_bound(matrix[row].begin(),matrix[row].end(),target)-matrix[row].begin();
        return matrix[row][col]==target;
    }
};