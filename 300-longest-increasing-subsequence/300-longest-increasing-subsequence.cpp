class Solution {
public:
    int f(int ind,int prev_ind,int n,vector<int> &nums,vector<vector<int>> &dp){
        if(ind==n)
            return 0;
        if(dp[ind][prev_ind+1]!=-1)
            return dp[ind][prev_ind+1];
        // not take
        int len=0+f(ind+1,prev_ind,n,nums,dp);
        if(prev_ind==-1 or nums[ind]>nums[prev_ind]){
            //take
            len=max(len,1+f(ind+1,ind,n,nums,dp));
        }
       return dp[ind][prev_ind+1]=len; 
    }
    int lengthOfLIS(vector<int>& nums) {
        int res=0;
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return f(0,-1,nums.size(),nums,dp);
    }
};