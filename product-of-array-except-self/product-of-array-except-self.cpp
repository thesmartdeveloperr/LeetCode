class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        vector<int> left(nums.size()),right(nums.size());
        int tmp=1;
        for(int i=0;i<nums.size();++i){
            tmp*=nums[i];
            left[i]=tmp;
        }
        tmp=1;
        for(int i=nums.size()-1;i>=0;--i){
            tmp*=nums[i];
            right[i]=tmp;
        }
        for(int i=0;i<nums.size();++i){
            if(i==0 or i==nums.size()-1){
                if(i==0)
                    res.push_back(right[1]);
                else
                    res.push_back(left[nums.size()-2]);
            }
            else
                res.push_back(left[i-1]*right[i+1]);
        }
        return res;
    }
};