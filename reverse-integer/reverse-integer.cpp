class Solution {
public:
    int reverse(int x) {
        double res=0;
        
        while(x){
            res=res*10+(x%10);
            x/=10;
        }
        
        if(res > INT_MAX || res < INT_MIN) 
        return 0;
        
        return res;
    }
};