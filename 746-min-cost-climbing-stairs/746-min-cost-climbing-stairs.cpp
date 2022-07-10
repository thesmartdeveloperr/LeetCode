class Solution {
public:
    int f(vector<int> &cost,int i,vector<int> &dp){
        if(i<0) 
            return 0;
	    if(i==0 or i==1) 
            return cost[i];
	    if(dp[i]!=-1) 
            return dp[i];
	    return dp[i]=cost[i]+min(f(cost,i-1,dp),f(cost,i-2,dp));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        int n=cost.size();
        return min(f(cost,n-1,dp),f(cost,n-2,dp));
    }
};