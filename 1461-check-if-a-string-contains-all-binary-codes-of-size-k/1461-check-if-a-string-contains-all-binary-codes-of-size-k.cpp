class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())
            return false;
        unordered_map<string,int> subs;
        for(int i=0;i<=s.size()-k;++i){
            int j=i;
            string tmp="";
            while(j<i+k)
                tmp+=s[j++];
            subs[tmp]++;
        }
        return subs.size()==(1<<k);
    }
};