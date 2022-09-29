class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        /*Solution 1 (sorting)*/
        // vector<int> res;
        // vector<vector<int>> v;
        // for(int i=0;i<arr.size();++i){
        //     v.push_back({abs(arr[i]-x),arr[i]});
        // }
        // sort(v.begin(),v.end());
        // for(int i=0;i<k;++i)
        //     res.push_back(v[i][1]);
        // sort(res.begin(),res.end());
        // return res;
        vector<int> res;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        for(int i=0;i<arr.size();++i){
             pq.push({abs(arr[i]-x),arr[i]});
         }
        while(k--){
            res.push_back(pq.top()[1]);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};