class Solution {
public:
    int reverse(int Num){
        int sum=0;
        while(Num){
            if(sum>INT_MAX/10 or sum<INT_MIN/10)
                return 0;
            sum = sum * 10 + Num % 10;
            Num /= 10;
        }
        return sum;
    }
    bool isSameAfterReversals(int num) {
        int Num=reverse(num);
        Num=reverse(Num);
        return Num==num;
    }
};