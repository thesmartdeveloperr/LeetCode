class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();++i){
            int j=i;
            while(j<nums.size() and nums[j]==0)
                j++;
            int n=j-i;
            ans+=(long long)n*(n+1)/2;
            i=j;
        }
        return ans;
    }
};