class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        vector<pair<int,int>> v;
        for(auto i:mp)
            v.push_back({i.second,i.first});
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<k;++i)
            res.push_back(v[i].second);
        return res;
    }
};