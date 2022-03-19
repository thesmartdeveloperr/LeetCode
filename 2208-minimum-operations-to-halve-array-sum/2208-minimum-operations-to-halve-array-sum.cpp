class Solution {
public:
    int halveArray(vector<int>& nums) {
        int res=0;
        priority_queue<double> pq;
        double og_sum=0;
        for(auto i:nums){
            pq.push(i);
            og_sum+=i;
        }
        double sum=og_sum;
        while(sum > og_sum/2.0){
            double highest=pq.top();
            pq.pop();
            sum-=highest;
            sum+=highest/2.0;
            pq.push(highest/2.0);
            res++;
        }
        return res;
    }
};