class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(auto i:nums)
            st.insert(i);
        int temp=nums.size();
        nums.clear();
        for(auto i:st)
            nums.push_back(i);
        // for(int i=st.size();i<temp;++i)
        //     nums.push_back(0);
        return st.size();
    }
};