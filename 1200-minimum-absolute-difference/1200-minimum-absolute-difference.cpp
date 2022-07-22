class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int mn_diff=INT_MAX;
        for(int i=0;i<arr.size()-1;++i){
            mn_diff=min(mn_diff,arr[i+1]-arr[i]);
        }
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i+1]-arr[i]==mn_diff)
                res.push_back({arr[i],arr[i+1]});
        }
        return res;
    }
};