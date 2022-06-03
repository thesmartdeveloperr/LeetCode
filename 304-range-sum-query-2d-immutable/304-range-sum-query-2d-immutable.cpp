class NumMatrix {
public:
    int n,m;
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        mat=matrix;
        n=mat.size();
        m=mat[0].size();
        for(int i=1;i<n;++i){
            for(int j=0;j<m;++j){
                mat[i][j]+=mat[i-1][j];
            }
        }
        for(int i=0;i<n;++i){
            for(int j=1;j<m;++j){
                mat[i][j]+=mat[i][j-1];
            }
        }
    }
    int sumRegion(int r1, int c1, int r2, int c2) {
        int res=mat[r2][c2];
        if(c1>=1)
            res-=mat[r2][c1-1];
        if(r1>=1)
            res-=mat[r1-1][c2];
        if(r1>=1 and c1>=1)
            res+=mat[r1-1][c1-1];
        return res;    
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */