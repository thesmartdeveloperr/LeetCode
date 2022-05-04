class Solution {
public:
    int mySqrt(int x) {
        long long low=1,high=x;
        long long mid;
        while(low<=high){
            mid=low+(high-low)/2;
            long long sqr=mid*mid;
            if(sqr==x){
                return mid;
            }
            else if(sqr<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};