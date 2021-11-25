class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,tmp_sum=0;
        int maxi=*max_element(nums.begin(),nums.end());
        if(maxi<0)
            return maxi;
        for(auto i:nums){
            tmp_sum+=i;
            if(sum<tmp_sum)
                sum=tmp_sum;
            if(tmp_sum<0)
                tmp_sum=0;
        }
        return sum;
    }
};