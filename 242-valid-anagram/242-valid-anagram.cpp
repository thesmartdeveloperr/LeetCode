class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        map<int,int> mp1,mp2;
        for(auto i:s)
            mp1[i]++;
        for(auto i:t)
            mp2[i]++;
        for(auto i:s)
            if(mp1[i]!=mp2[i])
                return false;
        for(auto i:t)
            if(mp1[i]!=mp2[i])
                return false;
        return true;
    }
};