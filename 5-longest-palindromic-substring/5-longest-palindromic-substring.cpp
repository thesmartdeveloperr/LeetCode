class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int maxLen=0;
        for(int i=0;i<s.size();++i){
            int l=i,r=i;
            while(l>=0 and r<s.size() and s[l]==s[r]){
                if(maxLen<r-l+1){
                    maxLen=r-l+1;
                    res=s.substr(l,r-l+1);
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 and r<s.size() and s[l]==s[r]){
                if(maxLen<r-l+1){
                    maxLen=r-l+1;
                    res=s.substr(l,r-l+1);
                }
                l--;
                r++;
            }
        }
        return res;
    }
};