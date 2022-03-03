class Solution:
    def numDecodings(self, s: str) -> int:
        def solve(s,i,dp):
            # ans=0
            if i<len(s) and s[i]=="0":
                return 0
            if i==len(s)-1:
                return 1
            if i==len(s):
                return 1
            if(dp[i]!=-1):
                return dp[i]
            ans=solve(s,i+1,dp)
            if int(s[i:i+2])<=26:
                ans+=solve(s,i+2,dp)
            dp[i]=ans
            return ans
        dp=[-1]*1000000
        return solve(s,0,dp)