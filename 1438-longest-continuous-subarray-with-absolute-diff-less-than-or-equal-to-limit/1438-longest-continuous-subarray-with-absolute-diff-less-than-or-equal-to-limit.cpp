class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> st;
        int j=0,res=1;
        for(int i=0;i<nums.size();++i){
            st.insert(nums[i]);
            while(!st.empty() and *st.rbegin()-*st.begin()>limit)
                st.erase(st.find(nums[j++]));
            res=max(res,i-j+1);
        }
        return res;
    }
};