class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();++i){
            if(mp.find(k-nums[i])!=mp.end() and mp[k-nums[i]]>0){
                res++;
                mp[k-nums[i]]--;
            }
            else
                mp[nums[i]]++;
        }
        return res;
    }
};