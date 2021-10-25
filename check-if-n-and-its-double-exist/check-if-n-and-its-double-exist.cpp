class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:arr){
            if((mp.find(i*2)!=mp.end() and i!=0) or (i==0 and mp[i]>1))
            return true;
        }
        return false;
    }
};