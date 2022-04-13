class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int val=1;
        vector<vector<int>> mat(n,vector<int>(n,0));
        while(r1<=r2 && c1<=c2){
            for(int i=c1;i<=c2;++i)
                mat[r1][i]=val++;
				
            for(int i = r1+1; i <= r2; ++i)
                mat[i][c2]=val++;
				
            if(r1<r2 && c1<c2){
                for(int i=c2-1;i>c1;--i)
                    mat[r2][i]=val++;
					for(int i=r2;i>r1;--i) 
                    mat[i][c1]=val++;
            }
            r1++;
            c1++;
            r2--;
            c2--;
        }
        return mat;
    }
};