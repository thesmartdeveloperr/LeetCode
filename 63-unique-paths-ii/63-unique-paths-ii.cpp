class Solution {
public:
    int f(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
         if(i<0 or j<0 or arr[i][j]==1)
            return 0;
        
        if(i==0 and j==0)
           return 1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int l=f(i,j-1,arr,dp);
        int r=f(i-1,j,arr,dp);
        
        return dp[i][j]=l+r;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        if(arr.size()==1 and arr[0].size()==1){
            if(arr[0][0]==1)
                return 0;
            else
                return 1;
        } 
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,arr,dp);
    }
};