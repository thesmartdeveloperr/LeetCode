class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int lastPeak=-1;
        for(int i=1;i<nums.size();++i)
            if(nums[i]>nums[i-1])
                lastPeak=i;
        if(lastPeak==-1){
            //array is sorted in descending order;
            for(int i=0;i<nums.size()/2;++i)
                swap(nums[i],nums[nums.size()-1-i]);
            return;
        }
        int ind=lastPeak;
        for(int i=lastPeak;i<nums.size();++i)
            if(nums[i]>nums[lastPeak-1] and nums[i]<nums[ind])
                ind=i;
        swap(nums[lastPeak-1],nums[ind]);
        sort(nums.begin()+lastPeak,nums.end());
        return;
    }
};