class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int top=0,down=n-1,left=0,right=n-1;
        int k=1;
        while(top<=down and left<=right){
            
            // for top row.
            for(int j=left;j<=right;++j)
                res[top][j]=k++;
            
            top++;
            // for last column.
            for(int i=top;i<=down;++i)
                res[i][right]=k++;
            
            right--;
            //for last row.
            for(int j=right;j>=left;--j)
                res[down][j]=k++;
            
            down--;
            //for first column.
            for(int i=down;i>=top;--i)
                res[i][left]=k++;
            
            left++;
        }
        return res;
    }
};