class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i:nums){
            if(pq.size()!= k || i > pq.top()){
                if (pq.size() == k)
                    pq.pop();
                pq.push(i);
            }
        }
        return pq.top();
    }
};