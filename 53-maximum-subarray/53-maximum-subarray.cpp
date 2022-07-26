class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,tmp_sum=0;
        for(int i=0;i<nums.size();++i){
            tmp_sum+=nums[i];
            if(sum<tmp_sum)
                sum=tmp_sum;
            if(tmp_sum<0)
                tmp_sum=0;
        }
        return sum;
    }
};