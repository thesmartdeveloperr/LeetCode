class Solution {
public:
    double myPow(double x, int n) {
        // double res=1;
        // if(n==0)
        //     return 1;
        // double nn=n;
        // if(nn<0)
        //     nn*=-1;
        // while(nn--){
        //     res*=x;
        // }   
        // if(n<0)
        //     res=(double)1/(double)res;
        // return res;
        return pow(x,n);
    }
};