class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1,mp2;
        for(auto i:nums1)
            mp1[i]++;
        for(auto i:nums2)
            mp2[i]++;
        vector<int> res;
        set<int> st;
        for(auto i:nums1)
            st.insert(i);
        for(auto i:st){
            int temp=min(mp1[i],mp2[i]);
            while(temp--)
                res.push_back(i);
        }
        return res;
    }
};