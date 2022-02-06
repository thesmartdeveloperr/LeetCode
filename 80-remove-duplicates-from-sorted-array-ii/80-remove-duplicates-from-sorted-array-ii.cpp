class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        int m=0;
        for(auto i:mp){
            if(i.second==1)
                nums[m++]=i.first;
            else if(i.second>=2)
            {
                nums[m++]=i.first;
                nums[m++]=i.first;
            }
        }
        k=m;
        return k;
    }
};