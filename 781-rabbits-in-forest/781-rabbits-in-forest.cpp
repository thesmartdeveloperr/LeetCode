class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res=0;
        map<int,int> mp;
        for(auto i:answers)
            mp[i]++;
        for(auto i:mp){
            if(i.first==0)
                res+=i.second;
            else{
                res+=i.first+1;
                i.second-=i.first+1;
                while(i.second>0){
                    i.second-=i.first+1;
                    res+=i.first+1;
                }
            }
        }
        return res;
    }
};