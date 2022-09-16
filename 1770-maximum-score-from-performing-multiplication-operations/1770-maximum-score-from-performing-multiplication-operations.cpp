class Solution {
public:
    int f(int l,int i,vector<int> &nums,vector<int> &muls,vector<vector<int>> &dp){
        if(i>=muls.size())
            return 0;
        if(dp[l][i]!=INT_MIN)
            return dp[l][i];
        int r = nums.size() - 1 - (i - l);
        return dp[l][i]=max(nums[l]*muls[i]+f(l+1,i+1,nums,muls,dp),
                     nums[r]*muls[i]+f(l,i+1,nums,muls,dp));
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m=multipliers.size();
        vector<vector<int>> dp(m,vector<int>(m,INT_MIN));
        return f(0,0,nums,multipliers,dp);
    }
};