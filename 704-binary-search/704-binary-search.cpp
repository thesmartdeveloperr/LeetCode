class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int pos=-1;
        // int low=0,high=nums.size()-1;
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     if(nums[mid]==target)
        //         return mid;
        //     else if(nums[mid]<target)
        //         low=mid+1;
        //     else
        //         high=mid-1;
        // }
        // return pos;
        /* cool method is to use binary_search algorithm from stl*/
        int pos=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return (pos<nums.size() and nums[pos]==target)?pos:-1;
    }
};