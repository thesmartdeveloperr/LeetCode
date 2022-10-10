class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        bool fl=true;
        for(int i=0;i<n/2;++i){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                fl=false;
                break;
            }
        }
        
        if(fl){
            if(n>1 and palindrome[n-1]=='a')
                palindrome[n-1]='b';
            else if(n>1)
                palindrome[n-1]='a';
            else
                palindrome="";
        }
        return palindrome;
    }
};