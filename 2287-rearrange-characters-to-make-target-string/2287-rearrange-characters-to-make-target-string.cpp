class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int ans=INT_MAX;
        map<char,int> mp1,mp2;
        for(auto i:s)
            mp1[i]++;
        for(auto i:target)
            mp2[i]++;
        for(auto i:mp2)
            ans=min(ans,mp1[i.first]/i.second);
        return ans;
    }
};