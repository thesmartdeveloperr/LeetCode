class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        long long mod=1e9+7;
        long long res=1;
        for(auto i:nums)
            pq.push(i);
        while(k--){
            auto tp=pq.top();
            pq.pop();
            pq.push(tp+1);
        }
        while(pq.size()){
            res*=pq.top();
            res%=mod;
            pq.pop();
        }
        return res;
    }
};