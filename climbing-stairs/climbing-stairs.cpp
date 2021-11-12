class Solution {
public:
    int climbStairs(int n) {
        int res=0;
        if(n<=2)
            return n;
        vector<int> tmp(n);
        tmp[0]=1;
        tmp[1]=2;
        int i=2;
        while(i<n){
            tmp[i]=tmp[i-1]+tmp[i-2];
            i++;
        }
        return tmp[i-1];
    }
};