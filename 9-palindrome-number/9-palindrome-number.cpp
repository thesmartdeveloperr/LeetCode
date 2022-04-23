class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int X=x;
        long long rev=0;
        while(X){
            rev=rev*10+X%10;
            X/=10;
        }
        return rev==x;
    }
};