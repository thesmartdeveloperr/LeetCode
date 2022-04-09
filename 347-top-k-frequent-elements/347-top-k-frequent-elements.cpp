class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        priority_queue<pair<int,int>> v;
        for(auto i:mp)
            v.push({i.second,i.first});
        for(int i=0;i<k;++i)
            res.push_back(v.top().second),v.pop();
        return res;
    }
};