class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        priority_queue<int> pq;
        for(auto i:mp)
            pq.push(i.second);
        
        nums.clear();
        while(k--){
            // nums.push_back(mp.find(pq.top())->second);
            for(auto i:mp){
                if(i.second==pq.top()){
                    nums.push_back(i.first);
                    mp.erase(i.first);
                    break;
                }
            }
            pq.pop();
        }
        return nums;
    }
};