class Solution {
public:
    int fib(int n) {
        int res=0,a=0,b=1,i=1;
        if(n<=1)
            return n;
        while(i<n){
            res=a+b;
            a=b;
            b=res;
            i++;
        }
        return res;
    }
};