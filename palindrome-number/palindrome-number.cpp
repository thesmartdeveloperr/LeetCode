class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        unsigned int s=0,X=x;
        while(x){
            s=(s*10)+(x%10);
            x/=10;
        }
        if(s==X)
            return true;
        return false;
    }
};