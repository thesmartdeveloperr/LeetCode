class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end()); // make the 
        int mx=*max_element(nums.begin(),nums.end());
        if(mx<0)
            return 1;
        for(int i=1;i<mx;++i)
            if(!st.count(i))
                return i;
        return mx+1;
    }
};