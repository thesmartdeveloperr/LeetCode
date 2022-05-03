class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ct=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();++i){
            if(upper_bound(arr2.begin(),arr2.end(),arr1[i]+d)==lower_bound(arr2.begin(),arr2.end(),arr1[i]-d))
                ct++;
        }
        return ct;
    }
};