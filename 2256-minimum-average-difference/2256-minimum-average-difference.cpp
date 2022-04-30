class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<int> left(n),right(n);
        long long sum=0;
        cout<<endl;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            left[i]=sum/(i+1);
        }
        sum=0;
        for(int i=n-1;i>=0;--i){
            if(i==n-1){
                right[i]=0;
                continue;
            }
            sum+=nums[i+1];
            right[i]=sum/(n-1-i);
        }
        for(int i=0;i<n;++i)
            nums[i]=abs(left[i]-right[i]);
        int mn=*min_element(nums.begin(),nums.end());
        for(int i=0;i<n;++i){
            if(nums[i]==mn)
                return i;
        }
        return res;
    }
};