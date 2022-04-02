class Solution {
public:
    bool validPalindrome(string s) {
        int ct1=0,ct2=0;
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                ct1++;
                j--;
            }
        }
        i=0;
        j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                ct2++;
                i++;
            }
        }
        if(ct1>1 and ct2>1)
            return false;
        return true;
    }
};