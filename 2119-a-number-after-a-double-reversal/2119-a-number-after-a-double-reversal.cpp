class Solution {
public:
    int reverse(int Num){
        int sum=0;
        while(Num){
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