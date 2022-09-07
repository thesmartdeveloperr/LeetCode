class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int> res(n),nums2_copy(m);;
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i=0;i<m;++i) 
            mp[nums2[i]]=i;
        for(int i=m-1;i>=0;--i){
            while(!st.empty() and st.top()<=nums2[i])
                st.pop();
            if(st.empty())
                nums2_copy[i]=-1;
            else
                nums2_copy[i]=st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<n;++i)
            res[i]=nums2_copy[mp[nums1[i]]];
        return res;
    }
};