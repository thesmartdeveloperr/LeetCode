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
        sort(v.begin(),v.end());
        for(auto i:v)
            cout<<i.first<<","<<i.second<<endl;
        if(k==v.size()){
            for(int i=0;i<v.size();++i)
                res.push_back(v[i].second);
            return res;
        }
        for(int i=v.size()-1;i>=v.size()-k;--i)
            res.push_back(v[i].second);
        return res;
    }
};