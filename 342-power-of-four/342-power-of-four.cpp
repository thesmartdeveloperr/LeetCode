class Solution {
public:
    bool isPowerOfFour(int n) {
        long long i=1;
        while(i<n){
            i*=4;
        }
        return i==n;
    }
};