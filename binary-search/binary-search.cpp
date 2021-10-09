class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res=-1,beg=0,end=nums.size()-1,mid;
        while(beg<=end){
            mid=(beg+end)/2;
            if(nums[mid]==target){
                res=mid;
                break;
            }
            else if(nums[mid]>target)
                end=mid-1;
            else
                beg=mid+1;
        }
        return res;
    }
};