class Solution {
public:
    int sum_of_digits(int num){
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int res;
        while(num>9){
            num=sum_of_digits(num);
        }
        return num;
    }
};