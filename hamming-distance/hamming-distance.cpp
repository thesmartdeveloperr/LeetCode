class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=0;
        int tmp=x^y;
        while(tmp){
            res++;
            tmp&=tmp-1;
        }
        return res;
    }
};