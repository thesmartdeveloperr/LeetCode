class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int unsafe=0;
        vector<vector<int>> mat(m,vector<int>(n,0));
        for(auto i:walls)
            mat[i[0]][i[1]]=-1;
        for(auto i:guards)
            mat[i[0]][i[1]]=-1;
        
        int r,c;
        for(int i=0;i<guards.size();++i){    
            int row=guards[i][0];
            int col=guards[i][1];
            
            // search horizontally right
            r=row;
            c=col+1;
            while(r>=0 and c>=0 and r<m and c<n and mat[r][c]!=-1){
                mat[r][c]=1;
                c++;
            }
            
            // search horizontally left
            r=row;
            c=col-1;
            while(r>=0 and c>=0 and r<m and c<n and mat[r][c]!=-1){
                mat[r][c]=1;
                c--;
            }
            
            // search vertically up
            r=row-1;
            c=col;
            while(r>=0 and c>=0 and r<m and c<n and mat[r][c]!=-1){
                mat[r][c]=1;
                r--;
            }
            
            //search vertically down
            r=row+1;
            c=col;
            while(r>=0 and c>=0 and r<m and c<n and mat[r][c]!=-1){
                mat[r][c]=1;
                r++;
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(mat[i][j]==0)
                    unsafe++;
            }
        }
        return unsafe;
    }
};