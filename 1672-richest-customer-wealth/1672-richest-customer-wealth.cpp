class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        for(auto i:accounts){
            res=max(res,accumulate(i.begin(),i.end(),0));
        }
        return res;
    }
};