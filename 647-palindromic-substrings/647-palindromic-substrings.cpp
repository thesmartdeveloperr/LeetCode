class Solution {
public:
    int f(int l,int r,string s){
        int res=0;
        while(l>=0 and r<s.size() and s[l]==s[r]){
            l--;
            r++;
            res++;
        }
        return res;
    }
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();++i)
            res+=f(i,i,s)+f(i,i+1,s);
        return res;
    }
};