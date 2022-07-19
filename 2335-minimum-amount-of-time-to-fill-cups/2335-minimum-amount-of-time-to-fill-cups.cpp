class Solution {
public:
    int fillCups(vector<int>& amount) {
        int res=0;
        priority_queue<int> pq(amount.begin(),amount.end());
        while(pq.top()!=0){
            int largest=pq.top();
            pq.pop();
            int second_largest=pq.top();
            pq.pop();
            largest--;
            if(second_largest>0)
            second_largest--;
            res++;
            pq.push(largest);
            pq.push(second_largest);
        }
        return res;
    }
};