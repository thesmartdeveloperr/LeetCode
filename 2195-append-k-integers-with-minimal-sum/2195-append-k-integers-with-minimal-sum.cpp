class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long res=(long long)k*(k+1)/2;
        set<int> st(begin(nums),end(nums));
        for(auto i:st)
            if(i<=k)
                res+=(++k)-i;
        return res;
    }
};