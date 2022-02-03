class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            int j=i+1;
            if(nums[i]>=nums[j])
                count++;
            if(i>0 && nums[i-1] >= nums[j] && j<n-1 && nums[i]>=nums[j+1])
                    count++;
            if(count>1) 
                return false;
        }
        return true;
    }
};