class Solution {
public:
    int sum_of_squares(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> uset;
        while(uset.find(n)==uset.end()){
            uset.insert(n);
            n=sum_of_squares(n);
            if(n==1)
                return true;
        }
        return false;
    }
};