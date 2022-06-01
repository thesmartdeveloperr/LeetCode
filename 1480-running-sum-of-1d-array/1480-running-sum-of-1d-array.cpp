class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        long long sum=0;
        for(auto i:nums){
            sum+=i;
            res.push_back(sum);
        }
        return res;
    }
};