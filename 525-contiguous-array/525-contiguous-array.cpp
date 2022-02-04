class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        int temp=0,Final=0;
        for(int i=0;i<nums.size();++i)
            if(nums[i]==0)
                nums[i]=-1;
        mp[0]=-1;
        for(int i=0;i<nums.size();++i){
            temp+=nums[i];
            if(mp.find(temp)!=mp.end())
                Final=max(Final,i-mp[temp]);
            else
                mp[temp]=i;
        }
        return Final;
    }
};