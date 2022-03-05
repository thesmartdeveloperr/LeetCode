class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
        vector<int> values(n, 0);
        for (int i:nums)
            values[i]+=i;
        int take=0, skip=0;
        for (int i=0;i<n;i++){
            int t=skip+values[i];
            int s=max(skip,take);
            take=t;
            skip=s;
        }
        return max(take, skip);
    }
};