class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int mx=*max_element(nums.begin(),nums.end());
        stack<int> st;
        for(int i=n-1;i>=0;--i){
            while(!st.empty() and st.top()<=nums[i])
                st.pop();
            if(st.empty()){
                int j=0;
                for(j=0;j<i;++j)
                    if(nums[j]>nums[i])
                        break;
                res[i]=j==i?-1:nums[j];
            }
            else
                res[i]=st.top();
            st.push(nums[i]);
        }
        return res;
    }
};