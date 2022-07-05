class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int res=1,ct=1;
        set<int> st(nums.begin(),nums.end());
        nums.clear();
        for(auto i:st)
            nums.push_back(i);
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]+1){
                ct++;
            }
            else{
                res=max(res,ct);
                ct=1;
            }
        }
        res=max(res,ct);
        return res;
    }
};