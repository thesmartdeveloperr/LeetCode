class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int res=0;
        int n=arr.size();
        map<int,int> mp;
        for(auto i:arr)
            mp[i]++;
        vector<int> tmp;
        for(auto i:mp)
            tmp.push_back(i.second);
        sort(tmp.begin(),tmp.end(),greater<int>());
        int i=0;
        while(n>arr.size()/2){
            n-=tmp[i++];
            res++;
        }
        return res;
    }
};