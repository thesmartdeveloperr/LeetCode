class Solution {
public:
    bool isPalindrome(string s) {
        string S="";
        for(int i=0;i<s.length();++i)
        {
            if(iswalnum(s[i]))
            S+=tolower(s[i]);
        }
        s=S;
       int i=0,j=s.length()-1;
        while(i<j){
            if(tolower(s[i])!=tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};