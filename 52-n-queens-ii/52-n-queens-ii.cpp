class Solution {
public:
    bool isSafe(vector<string> &board, int row,int col){
        int r=row,c=col;
        while(r>=0 and c>=0){
            if(board[r--][c--]=='Q')
                return false;
        }
        r=row,c=col;
        while(r<board.size() and c>=0){
            if(board[r++][c--]=='Q')
                return false;
        }
        r=row,c=col;
        while(c>=0){
            if(board[r][c--]=='Q')
                return false;
        }
        return true;
    }
    void f(int col,int n,vector<string> &board,int &ans){
        if(col==n){
            ans++;
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
    int totalNQueens(int n) {
        int ans=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;++i)
            board[i]=s;
        f(0,n,board,ans);
        return ans;
    }
};