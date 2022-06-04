class Solution {
public:
    bool isSafe(vector<string> board,int row,int col){
        int r=row,c=col;
        // check upper diagonal
        while(r>=0 and c>=0)
            if(board[r--][c--]=='Q')
                return false;
        //check lower diagonal..
        r=row,c=col;
        while(r<board.size() and c>=0)
            if(board[r++][c--]=='Q')
                return false;
        //check previous columns...
        r=row,c=col;
        while(c>=0)
            if(board[r][c--]=='Q')
                return false;
        return true;
    }
    void f(int col,int n,vector<string> &board,vector<vector<string>> &ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;++i){
            if(isSafe(board,i,col)){
                board[i][col]='Q';
                f(col+1,n,board,ans);
                board[i][col]='.';
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        // make the board and perform the operations.
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;++i)
            board[i]=s;
        f(0,n,board,ans);
        return ans;
    }
};