class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        if(nums.size()<=1 or nums[0]!=nums[1])
            return nums[0];
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1])
                return nums[mid];
            if((mid%2==0 and nums[mid]==nums[mid+1]) or (mid%2==1 and nums[mid]==nums[mid-1]))
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};