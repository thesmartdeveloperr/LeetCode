class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<int> pq;
        
        for(auto i:nums)
            mp[i]++;
        
        for(auto i:mp)
            pq.push(i.second);
        
        vector<int> res;
        while(k--){
            for(auto i:mp){
                if(i.second==pq.top()){
                    res.push_back(i.first);
                    mp.erase(i.first);
                    break;
                }
            }
            pq.pop();
        }
        return res;
    }
};