class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,tmp_sum=0;
        for(auto &i:nums){
            tmp_sum+=i;
            sum=max(sum,tmp_sum);
            if(tmp_sum<0)
                tmp_sum=0;
        }
        return sum;
    }
};