class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        for(auto &i:courses){
            swap(i[0],i[1]);
        }
        sort(courses.begin(),courses.end());
        int sum=0;
        for(auto i:courses) {
            sum+=i[1];
            pq.push(i[1]);
            if(sum>i[0]) {
                sum-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};