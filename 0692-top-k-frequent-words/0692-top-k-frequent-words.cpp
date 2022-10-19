class Solution {
public:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res(k);
        priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp> pq;
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();++i){
            mp[words[i]]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
            if(pq.size()>k)
                pq.pop();
        }
        int m=k-1;
        while(m>=0){
            res[m--]=pq.top().second;
            pq.pop();
        }
        return res;
    }
};