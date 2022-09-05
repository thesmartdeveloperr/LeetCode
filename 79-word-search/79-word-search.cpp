class Solution {
public:
    bool dfs(int r,int c,int i,vector<vector<char>> &board,vector<vector<int>> &visited,string word){
        if(i==word.size())
            return true;
        if(r<0 or c<0 or r>=board.size() or c>=board[0].size() or visited[r][c] or board[r][c]!=word[i])
            return false;
        visited[r][c]=1;
        bool res=dfs(r+1,c,i+1,board,visited,word) or dfs(r-1,c,i+1,board,visited,word) or dfs(r,c+1,i+1,board,visited,word) or dfs(r,c-1,i+1,board,visited,word);
        visited[r][c]=0;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(dfs(i,j,0,board,visited,word))
                    return true;
            }
        }
        return false;
    }
};