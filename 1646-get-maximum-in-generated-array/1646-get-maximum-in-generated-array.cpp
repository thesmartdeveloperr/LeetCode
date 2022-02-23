class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==1)
            return 1; 
        vector<int> nums(n+1);
        for(int i=0;i<n;++i){
            if(i<=1)
                nums[i]=i;
            if(2*i>=2 and 2*i<=n)
                nums[2*i]=nums[i];
            if(2*i+1>=2 and 2*i+1<=n)
                nums[2*i+1]=nums[i]+nums[i+1];
        }
        return *max_element(nums.begin(),nums.end());
    }
};