class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        vector<int> s1hash(26);
        vector<int> s2hash(26);
        int i=0,j=0;
        while(j<s1.size()){
            s1hash[s1[j]-'a']+=1;
            s2hash[s2[j]-'a']+=1;
            j++;
        }
        j--;
        while(j<s2.size()){
            if(s1hash==s2hash)
                return true;
            j+=1;
            if(j!=s2.size())
                s2hash[s2[j]-'a']+=1;
            s2hash[s2[i]-'a']-=1;
            i+=1;
        }
        return false;
    }
};