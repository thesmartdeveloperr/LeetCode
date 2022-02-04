class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        // int n=nums.size();
        // int count=0;
        // stack<int> st;
        // for(int i=0;i<n-1;i++){
        //     if(!st.empty() and st.top()>=nums[i] and count==1) 
        //         return false;
        //     if(st.empty() or st.top()<nums[i])
        //     st.push(nums[i]);
        //     if(nums[i]<=nums[i-1])
        //         count++;
        // }
        // return true;
        int n=nums.size();
        int count=0;
        vector<int> res;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j)
                if(j!=i)
                    res.push_back(nums[j]);
            count=1;
            for(int k=0;k<res.size()-1;++k)
                if(res[k]<res[k+1])
                    count++;
            if(count==res.size())
                return true;
            res.clear();
        }
        return false;
    }
};