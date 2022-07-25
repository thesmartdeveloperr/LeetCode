class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int pos_first=-1,pos_last=-1;
        int one=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int two=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(one<nums.size() and nums[one]==target)
            pos_first=one;
        if(two>0 and nums[two-1]==target)
            pos_last=two-1;
        return {pos_first,pos_last};
    }
};