class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=0;
        sort(nums.begin(),nums.end());
        int maxi=nums[nums.size()-1]-1;
        int maxi2=nums[nums.size()-2]-1;
        res=maxi*maxi2;
        return res;
    }
};