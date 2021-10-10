class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> res;
        unordered_map<int,int> ump;
        for(auto i:arr)
            ump[i]++;
        for(auto i:ump){
            if(i.second==2)
                res.push_back(i.first);
        }
        return res;
    }
};