class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n=nums.size();
        //we need quadruplets.
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;++i){
            for(int j=i+1;j<n-2;++j){
                long long sum=nums[i]+nums[j];
                int l=j+1,r=n-1;
                while(l<r){
                    if(nums[l]+nums[r]+sum>target)
                        r--;
                    else if(nums[l]+nums[r]+sum<target)
                        l++;
                    else{
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});
                        while(l<r-1 and nums[l]==nums[l+1])
                            l++;
                        while(r>l-1 and nums[r]==nums[r-1])
                            r--;
                        l++;
                        r--;
                    }
                }
            }
        }
        set<vector<int>> st;
        for(auto i:res)
            st.insert(i);
        res.clear();
        for(auto i:st)
            res.push_back(i);
        return res;
    }
};