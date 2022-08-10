class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(auto i:nums){
            ones=(ones^i)&(~twos);
            twos=(twos^i)&(~ones);
        }
        return ones;
    }
};