class Solution {
public:
    int arrangeCoins(int n) {
      long long i=0,res=0,prev=1;
        while(i+prev<=n)
            i+=prev,prev++,res++;
        return res;
    }
};