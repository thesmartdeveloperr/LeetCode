class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int res=0;
        int n=rocks.size();
        vector<int> remain(n);
        for(int i=0;i<n;++i)
            remain[i]=capacity[i]-rocks[i];
        sort(remain.begin(),remain.end());
        for(auto i:remain){
            if(i<=additionalRocks){
                additionalRocks-=i;
                res++;   
            }
        }
        return res;
    }
};