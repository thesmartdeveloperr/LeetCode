class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long m=mass;
        for(int i=0;i<arr.size();++i){
            if(arr[i]>m)
                return false;
            m+=arr[i];
        }
        return true;
    }
};