class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int pos_first=-1,pos_last=-1;
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target)
                low=mid+1;
            else{
                if(nums[mid]==target)
                    pos_first=mid;
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target)
                high=mid-1;
            else{
                if(nums[mid]==target){
                    pos_last=mid;
                }
                low=mid+1;
            }
        }
        res.push_back(pos_first);
        res.push_back(pos_last);
        return res;
    }
};