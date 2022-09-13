class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        set<vector<int>> st;
        for(int i=0;i<nums.size();++i){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int tmp=nums[i]+nums[j]+nums[k];
                if(tmp==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(tmp>0)
                    k--;
                else
                    j++;
            }
        }
        for(auto i:st)
            res.push_back(i);
        return res;
    }
};