class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();++i)
                mp[nums[i]].push_back(i);
        for(auto i:mp){
            auto tmp=i.second;
            for(int j=1;j<tmp.size();++j){
                if(tmp[j]-tmp[j-1]<=k)
                    return true;
            }
        }
        return false;
    }
};