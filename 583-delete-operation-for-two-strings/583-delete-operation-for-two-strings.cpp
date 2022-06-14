class Solution {
public:
    int solve(string w1, string w2, int i, int j,vector<vector<int>>&dp) {
	if(i == size(w1) && j == size(w2)) 
        return 0;
	if(i == size(w1)) 
        return size(w2) - j;
    if(j == size(w2)) 
        return size(w1) - i; 
	if(dp[i][j]!=-1)
        return dp[i][j];
    if(w1[i] == w2[j]) 
        return dp[i][j]=solve(w1, w2, i + 1, j + 1,dp);
	return dp[i][j]=1 + min(solve(w1, w2, i + 1, j,dp), solve(w1, w2, i, j + 1,dp));
}
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
        return solve(word1,word2,0,0,dp);       
    }
};