class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int res=0;
        int rows=matrix.size();
        if(rows==0)
            return 0;
        int cols=matrix[0].size();
        vector<vector<int>> dp(rows+1,vector<int>(cols+1));
        for(int i=1;i<=rows;++i){
            for(int j=1;j<=cols;++j){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=1 + min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
                    res=max(res,dp[i][j]);
                }
            }
        }
        return res*res;
    }
};