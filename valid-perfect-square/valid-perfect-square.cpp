class Solution {
public:
    bool isPerfectSquare(unsigned int num) {
        if(num==1)
            return true;
        for(unsigned int i=1;i<=num/2;++i)
            if(i*i==num)
                return true;
        return false;
    }
};