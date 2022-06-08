class Solution {
public:
    bool isPalindrome(string s){
        int n=s.size();
        for(int i=0;i<n;++i){
            if(s[i]!=s[n-1-i])
                return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        return isPalindrome(s)?1:2;
    }
};