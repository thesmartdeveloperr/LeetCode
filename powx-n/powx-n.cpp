class Solution {
public:
    double myPow(double x, int n) {
        long long nn=n;
        if(nn<0)
            nn*=-1;
        double pow=1.0;
        while(nn){
            if(nn%2){
                pow*=x;
                nn--;
            }
            else{
                x*=x;
                nn/=2;
            }
        }
        if(n<0)
            pow=(double)1.0/(double)pow;
        return pow;
    }
};