class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<char> hash(26);
        for(auto i:s) hash[i-'a']++;
        for(auto i:t) hash[i-'a']--;
        for(auto i:hash)
            if(i>0)
                return false;
        return true;
    }
};