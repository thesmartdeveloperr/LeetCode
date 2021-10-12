class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num=nums.size();
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        vector<int> v;
        for(auto i:mp)
            v.push_back(i.first);
        for(int i=0;i<v.size();++i)
            if(v[i]!=i)
                return i;
        return num;
    }
};