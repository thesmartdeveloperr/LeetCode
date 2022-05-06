class Solution {
public:
    int arrangeCoins(int n) {
      long long i=0;
        int res=0;
        long long prev=1;
        while(i+prev<=n){
            i+=prev;
            prev++;
            res++;
        }
        return res;
    }
};