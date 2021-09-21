class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tmp;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0)
                tmp.push_back(nums[i]);
        }
        int remain=nums.size()-tmp.size();
        while(remain--){
            tmp.push_back(0);
        }
        for(int i=0;i<nums.size();++i)
            nums[i]=tmp[i];
    }
};