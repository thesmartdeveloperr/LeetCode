class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res;
        map<int,int> mp;
        for(auto i:arr)
            mp[i]++;
        int x=1;
        for(auto &i:mp){
            i.second=x;
            x++;
        }
        for(auto i:arr){
            res.push_back(mp[i]);
        }
        return res;
    }
};