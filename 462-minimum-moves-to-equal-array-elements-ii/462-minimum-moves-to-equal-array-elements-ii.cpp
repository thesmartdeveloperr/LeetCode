class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int res=0;
        sort(nums.begin(),nums.end());
        int median;
        if(nums.size()&1)
            median=nums[nums.size()/2];
        else{
            median=(nums[nums.size()/2-1]+nums[nums.size()/2])/2;
        }
        for(auto i:nums)
            res+=abs(i-median);
        return res;
    }
};