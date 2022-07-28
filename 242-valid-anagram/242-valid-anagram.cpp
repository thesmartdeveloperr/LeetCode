class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size();
        char hash[26]={0};
        for(int i=0;i<n;++i){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(auto i:hash)
            if(i>0)
                return false;
        return true;
    }
};