class Solution {
public:
    int rob(vector<int>& nums) {
        int even=0,odd=0,n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n-1;++i){
            if(i%2==0){
                even+=nums[i];
                even=max(even,odd);
            }
            else{
                odd+=nums[i];
                odd=max(even,odd);
            }
        }
        int res1=max(even,odd);
        even=0;
        odd=0;
        for(int i=1;i<n;++i){
            if(i%2==0){
                even+=nums[i];
                even=max(even,odd);
            }
            else{
                odd+=nums[i];
                odd=max(even,odd);
            }
        }
        int res2=max(even,odd);
        return max(res1,res2);
    }
};