class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> mp;
        for(auto i:nums){
            if(mp.find(i)==mp.end())
                mp[i]=true;
            else
                return true;
        }
        return false;
    }
};