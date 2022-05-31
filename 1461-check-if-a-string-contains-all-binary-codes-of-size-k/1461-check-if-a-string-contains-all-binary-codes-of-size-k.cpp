class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())
            return false;
        set<string> subs;
        for(int i=0;i<=s.size()-k;++i){
            int j=i;
            string S="";
            while(j<i+k){
                S+=s[j];
                j++;
            }
            subs.insert(S);
        }
        return subs.size()==pow(2,k);
    }
};