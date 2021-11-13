class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res(nums.begin(),nums.end());
        for(auto i:nums)
            res.push_back(i);
        return res;
    }
};