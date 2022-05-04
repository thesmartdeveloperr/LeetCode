class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // int res=0;
        // unordered_map<int,int> mp;
        // for(auto i:nums)
        //     mp[i]++;
        // for(int i=0;i<nums.size();++i){
        //     if(mp[nums[i]]>0 and mp.find(k-nums[i])!=mp.end() and mp[k-nums[i]]>0){
        //         res++;
        //         mp[k-nums[i]]--;
        //         mp[nums[i]]--;
        //     }
        // }
        // return res;
        sort(nums.begin(),nums.end());
        int res=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            int val=nums[i]+nums[j];
            if(val==k){
                res++;
                i++;
                j--;
            }
            else if(val<k){
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};