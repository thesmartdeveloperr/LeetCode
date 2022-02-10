class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
            if(sum==k)
                res++;
            if(mp.find(sum-k)!=mp.end())
                res+=mp[sum-k];
            mp[sum]++;
        }
        return res;
    }
};