class Solution {
public:
    int minSteps(string s, string t) {
        int res=0;
        int hash[26]={0};
        for(int i=0;i<s.size();++i){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int i=0;i<26;++i)
            res+=abs(hash[i]);
        return res/2;
    }
};