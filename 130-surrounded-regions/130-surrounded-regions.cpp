class Solution {
public:
    //function for performing flood fill..
    void floodfill(int i,int j,vector<vector<char>>& matrix){
        if(i<0 or j<0 or i>=matrix.size() or j>=matrix[i].size())
            return;
        if(matrix[i][j]!='-')
            return;
        matrix[i][j]='O';
        floodfill(i-1,j,matrix);//up fill
        floodfill(i+1,j,matrix);//down fill
        floodfill(i,j-1,matrix);//left fill
        floodfill(i,j+1,matrix);//right fill
    }
    /*
    we solve this problem using classic flood fill technique
    
    1) convert all Os into -
    2) apply flood fill(on the edges ofcourse)
    3) check for the unchanged values, those will be changed to X
    4) change the remaining values to x.. That is the answer.
    
    */
    void solve(vector<vector<char>>& board) {
        int n=board.size();//rows
        int m=board[0].size();//columns
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]=='O')
                    board[i][j]='-';
            }
        }
        //left border
        for(int i=0;i<n;++i){
            if(board[i][0]=='-')
                floodfill(i,0,board);
        }
        //right border
        for(int i=0;i<n;++i){
            if(board[i][m-1]=='-')
                floodfill(i,m-1,board);
        }
        //upper border
        for(int j=0;j<m;++j){
            if(board[0][j]=='-')
                floodfill(0,j,board);
        }
        //lower border
        for(int j=0;j<m;++j){
            if(board[n-1][j]=='-')
                floodfill(n-1,j,board);
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(board[i][j]=='-')
                    board[i][j]='X';
            }
        }
    }
};