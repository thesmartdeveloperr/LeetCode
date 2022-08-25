class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26]={0};
        for(int i=0;i<magazine.size();++i)
            hash[magazine[i]-'a']++;
        for(auto &i:ransomNote)
            hash[i-'a']--;
        for(int i=0;i<26;++i)
            if(hash[i]<0)
                return false;
        return true;
    }
};