class Solution{
public:
    int maximumGap(vector<int>& nums) {
        //time n, space 1
        if(nums.size()<2)
            return 0;
        map<int,int> mp;
        vector<int> res;
        int ans=INT_MIN;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            //i.first-> key
            //i.second-> value
            while(i.second){
                i.second--;
                res.push_back(i.first);
            }
        }
        for(int i=1;i<res.size();++i){
            ans=max(ans,res[i]-res[i-1]);
        }
        return ans;
    }
};