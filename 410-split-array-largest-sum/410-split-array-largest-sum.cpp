class Solution {
public:
    int check(vector<int> nums,int sum){
        int ct=1;
        int tmp=0;
        for(int i=0;i<nums.size();++i){
            if(tmp+nums[i]<=sum)
                tmp+=nums[i];
            else{
                tmp=nums[i];
                ct++;
            }
        }
        return ct;
    }
    int splitArray(vector<int>& nums, int m) {
        int res=INT_MAX,low=0,high=0,mid;
        for(auto i:nums){
            low=max(low,i);
            high+=i;
        }
        while(low<=high){
            mid=low+(high-low)/2;
            if(check(nums,mid)<=m){
                res=min(res,mid);
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
};