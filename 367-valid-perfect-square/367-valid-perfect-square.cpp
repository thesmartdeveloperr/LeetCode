class Solution {
public:
    bool isPerfectSquare(unsigned int num) {
        if(num==1)
            return true;
        long long low=1;
        long long high=num;
        long long mid;
        while(low<=high){
            mid=low+(high-low)/2;
            long long val=mid*mid;
            if(val==num)
                return true;
            else if(val<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};