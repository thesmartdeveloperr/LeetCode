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
        if(n<=0)
            return false;
        unordered_set<int> cache;
        while(cache.find(n)==cache.end()){
            cache.insert(n);
            n=sum_of_squares(n);
            if(n==1)
                return true;
        }
        return false;
    }
};