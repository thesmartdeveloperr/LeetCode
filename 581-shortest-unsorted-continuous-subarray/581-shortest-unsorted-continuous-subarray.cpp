class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int r=-2,l=-1,tmp=INT_MIN;
        for(int i=0;i<nums.size();++i){
            tmp=max(tmp,nums[i]);
            if(nums[i]<tmp)
                r=i;
        }
        tmp=INT_MAX;
        for(int i=nums.size()-1;i>=0;--i){
            tmp=min(tmp,nums[i]);
            if(nums[i]>tmp)
                l=i;
        }
        return r-l+1;
    }
};