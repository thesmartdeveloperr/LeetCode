class Solution {
public:
    int divide(int dividend, int divisor) {
        long long x=floor(dividend/(long long)divisor);
        if(x>INT_MAX)
            return INT_MAX;
        else if(x<INT_MIN)
            return INT_MIN;
        return x;
    }
};