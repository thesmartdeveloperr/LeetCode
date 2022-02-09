class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int res=0;
        map<int,int> mp;
        
        for(auto i:nums)
            mp[i]++;
        
        for(auto i:mp){
            if(k==0){
                if(i.second>=2)
                res++;
            }
            else{
                if(mp.find(i.first+k)!=mp.end())
                res++;
            }
        }
        return res;
    }
};