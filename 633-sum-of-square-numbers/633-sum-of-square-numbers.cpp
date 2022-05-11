class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low=0,high=sqrt(c);
        while(low<=high){
            long long val=low*low + high*high;
            if(val==c)
                return true;
            else if(val<c)
                low++;
            else
                high--;
        }
        return false;
    }
};