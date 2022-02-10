class Solution {
public:
    int f(vector<int> &nums,int i,vector<int>&dp){
        if(i<0)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int res=max(f(nums,i-1,dp),f(nums,i-2,dp)+nums[i]);
        return dp[i]=res;
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return f(nums,nums.size()-1,dp);
    }
};