class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=-1,mini=INT_MAX;
        if(nums[0]==*max_element(nums.begin(),nums.end()) and nums[nums.size()-1]==*min_element(nums.begin(),nums.end()))
            return -1;
        for(int i=0;i<nums.size();++i){
            mini=min(nums[i],mini);
            res=max(res,nums[i]-mini);
        }
        return res;
    }
};