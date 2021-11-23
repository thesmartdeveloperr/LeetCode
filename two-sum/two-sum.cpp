class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            if(mp.find(target-nums[i])!=mp.end()){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};