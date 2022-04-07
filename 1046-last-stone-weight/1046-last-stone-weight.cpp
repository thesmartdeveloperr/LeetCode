class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones)
            pq.push(i);
        while(pq.size()>1){
            int mx=pq.top();
            pq.pop();
            int second_mx=pq.top();
            pq.pop();
            if(mx!=second_mx)
                pq.push(mx-second_mx);
        }
        if(pq.size()==0)
            return 0;
        return pq.top();
    }
};