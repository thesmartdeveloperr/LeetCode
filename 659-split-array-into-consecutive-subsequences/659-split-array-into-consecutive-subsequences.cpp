class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> mp,seq;
        for(auto i:nums)
            mp[i]++;
        for(auto i:nums){
            if(mp[i]==0)
                continue;
            else if(seq[i-1]>0){
                mp[i]--;
                seq[i-1]--;
                seq[i]++;
            }
            else{
                // create new subsequence from here...
                if(mp[i+1]==0 or mp[i+2]==0)
                    return false;
                mp[i]--;
                mp[i+1]--;
                mp[i+2]--;
                seq[i+2]+=1;
            }
        }
        return true;
    }
};