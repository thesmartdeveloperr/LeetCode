class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pos=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(pos<nums.size() and nums[pos]==target)
            return pos;
        return -1;
    }
};