class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        vector<int> hash1(26),hash2(26);
        int i=0,j=0;
        while(j<s1.size()){
            hash1[s1[j]-'a']++;
            hash2[s2[j]-'a']++;
            j++;
        }
        j--;
        while(j<s2.size()){
            if(hash1==hash2)
                return true;
            j++;
            if(j<s2.size())
                hash2[s2[j]-'a']++;
            hash2[s2[i]-'a']--;
            i++;
        }
        return false;
    }
};