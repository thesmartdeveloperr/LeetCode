class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=1,high=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=lower_bound(nums.begin(),nums.end(),mid)-nums.begin();
            if(nums.size()-val==mid)
                return mid;
            else if(nums.size()-val<mid)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};