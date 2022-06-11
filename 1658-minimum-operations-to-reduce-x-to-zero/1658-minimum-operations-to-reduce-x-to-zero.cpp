class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target=-x;
        for (int num:nums) 
            target+=num;
        
        if(target==0) 
            return nums.size();

        map<int,int> mp;
        mp[0]=-1;
        int sum=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();++i) {
	        sum+=nums[i];
	        if(mp.find(sum-target)!=mp.end()){
		    res = max(res,i-mp[sum - target]);
	        }
	        mp[sum]=i;
        }
        return res==INT_MIN ? -1 : nums.size() - res;
    }
};