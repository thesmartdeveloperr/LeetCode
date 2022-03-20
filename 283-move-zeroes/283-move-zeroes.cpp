class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(auto i:nums)
            if(i!=0)
                nums[j++]=i;
        while(j<nums.size())
            nums[j++]=0;
    }
};