class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res=-1;
        map<char,vector<int>> mp;
        for(int i=0;i<s.size();++i)
            mp[s[i]].push_back(i);
        
        for(auto i:mp){
            auto arr=i.second;
            int n=arr.size();
            res=max(res,arr[n-1]-arr[0]-1);
        }
        return res;
    }
};