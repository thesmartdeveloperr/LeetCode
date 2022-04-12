class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        int nbr=0;
        vector<vector<int>> res(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                nbr=0;
                if(j>0 and board[i][j-1]==1)
                    nbr++;
                if(j<m-1 and board[i][j+1]==1)
                    nbr++;
                if(i>0 and board[i-1][j]==1)
                    nbr++;
                if(i<n-1 and board[i+1][j]==1)
                    nbr++;
                if(i>0 and j>0 and board[i-1][j-1]==1)
                    nbr++;
                if(i>0 and j<m-1 and board[i-1][j+1]==1)
                    nbr++;
                if(i<n-1 and j>0 and board[i+1][j-1]==1)
                    nbr++;
                if(i<n-1 and j<m-1 and board[i+1][j+1]==1)
                    nbr++;
                if(board[i][j]==1){
                    if(nbr<2)
                        res[i][j]=0;
                    else if(nbr==2 or nbr==3)
                        res[i][j]=1;
                    else if(nbr>3)
                        res[i][j]=0;
                }
                else{
                    if(nbr==3)
                        res[i][j]=1;
                }
            }
        }
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                board[i][j]=res[i][j];
    }
};