class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        sort(courses.begin(),courses.end(),[](vector<int> &a,vector<int>&b){
            return a[1]<b[1];
        });
        int sum=0;
        for(auto i:courses) {
            sum+=i[0];
            pq.push(i[0]);
            if(sum>i[1]) {
                sum-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};