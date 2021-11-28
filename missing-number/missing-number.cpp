class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=1;i<=nums.size();++i)
            sum1+=i;
        for(auto i:nums)
            sum2+=i;
        return sum1-sum2;
    }
};