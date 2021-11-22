class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=1;
        vector<int> tmp;
        for(int i=1;i<nums.size();++i){
            if(nums[i]>nums[i-1])
                count++;
            else{
                tmp.push_back(count);
                count=1;   
            }
        }
        tmp.push_back(count);
        return *max_element(tmp.begin(),tmp.end());
    }
};