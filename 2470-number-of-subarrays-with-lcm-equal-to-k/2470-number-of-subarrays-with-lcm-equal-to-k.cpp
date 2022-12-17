class Solution {
public:
    long long gcd(long long int a, long long int b){
       if (b == 0)
           return a;
        return gcd(b, a % b);
      }
      long long Lcm(int a, int b){
        return (a / gcd(a, b)) * b;
       }
    int subarrayLCM(vector<int>& nums,int k) {
        int res=0;
        for(int i=0;i<nums.size();++i){
            int lcm=nums[i];
            for(int j=i;j<nums.size();++j){
                lcm=Lcm(lcm,nums[j]);
                if(lcm==k)
                    res++;
                if(lcm>k)
                    break;
            }
        }
        return res;
    }
};