class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size()<p.size())
            return res;
        vector<int> hash1(26),hash2(26);
        int i=0,j=0;
        while(j<p.size()){
            hash1[s[j]-'a']++;
            hash2[p[j]-'a']++;
            j++;
        }
        j--;
        while(j<s.size()){
            if(hash1==hash2)
                res.push_back(i);
            j++;
            if(j<s.size())
                hash1[s[j]-'a']++;
            hash1[s[i]-'a']--;
            i++;
        }
        return res;
    }
};