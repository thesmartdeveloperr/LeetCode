class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=-1,end=-1;
        int low=0,high=nums.size()-1;
        // find first index of target.
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                high=mid-1;
                if(nums[mid]==target)
                    st=mid;
            }
            else{
                low=mid+1;
            }
        }
        // find last index of target.
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target)
                    end=mid;
            }
            else{
                high=mid-1;
            }
        }
        return {st,end};
    }
};