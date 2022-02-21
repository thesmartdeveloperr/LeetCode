class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(i.second>nums.size()/2){
                res=i.first;
                break;
            }
        }
        return res;
    }
};