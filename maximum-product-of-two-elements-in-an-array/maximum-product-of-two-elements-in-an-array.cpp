class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto i:nums)
            pq.push(i);
        int tmp1=pq.top()-1;
        pq.pop();
        int tmp2=pq.top()-1;
        pq.pop();
        return tmp1*tmp2;
    }
};