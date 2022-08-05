class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        vector<int> left(n),right(n);
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        for(int i=1;i<n;++i)
            left[i]=max(left[i-1],nums[i]);
        for(int i=n-2;i>=0;--i)
            right[i]=min(right[i+1],nums[i]);
        while(left[i]>right[j] and i<nums.size() and j<nums.size())
            i++,j++;
        return i+1;
    }
};