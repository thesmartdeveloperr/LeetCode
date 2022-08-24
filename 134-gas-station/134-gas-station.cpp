class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int pos_start=0;
        priority_queue<int> pq;
        for(int i=0;i<n;++i){
            if(gas[i]-cost[i]>=0){
                pq.push(i);
            }
        }
        int ans=-1;
        while(pq.size()){
            // cout<<pq.top()<<endl;
            int i=pq.top(),j=0;
            int Gas=0;
            bool fl=true;
            while(i<n){
                Gas+=gas[i]-cost[i];
                if(Gas<0){
                    fl=false;
                    break;
                }
                i++;
            }
            while(j<pq.top()){
                Gas+=gas[j]-cost[j];
                if(Gas<0){
                    fl=false;
                    break;
                }
                j++;
            }
            if(fl){
                ans=pq.top();
                break;
            }
            pq.pop();
        }
        return ans;
    }
};