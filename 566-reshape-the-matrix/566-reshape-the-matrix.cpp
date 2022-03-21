class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> arr;
        for(int i=0;i<mat.size();++i)
            for(int j=0;j<mat[0].size();++j)
                arr.push_back(mat[i][j]);
        if( r*c == arr.size()){
            vector<vector<int>> new_mat(r,vector<int>(c,0));
            int k=0;
            for(int i=0;i<r;++i)
                for(int j=0;j<c;++j)
                    new_mat[i][j]=arr[k++];
            return new_mat;
        }
        return mat;
    }
};