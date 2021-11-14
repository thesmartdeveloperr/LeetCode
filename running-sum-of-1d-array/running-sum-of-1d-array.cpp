class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int temp=0;
        for(auto i:nums){
            temp+=i;
            res.push_back(temp);
        }
        return res;
    }
};