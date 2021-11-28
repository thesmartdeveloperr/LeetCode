class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            int tmp=abs(nums[i]);
            nums[tmp-1]=-abs(nums[tmp-1]);
        }
        for(int i=0;i<nums.size();++i)
            if(nums[i]>0)
                res.push_back(i+1);
        return res;
    }
};