class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int bits=0;
        int N=n;
        while(n){
            bits++;
            n/=2;
        }
        int x=pow(2,bits)-1;
        return N^x;
    }
};