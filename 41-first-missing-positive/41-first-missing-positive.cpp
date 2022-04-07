class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        int mx=*max_element(nums.begin(),nums.end());
        if(mx<=0)
            return 1;
        for(int i=1;i<mx;++i){
            if(mp.find(i)==mp.end())
                return i;  
        }
        return mx+1;
    }
};