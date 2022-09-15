class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> res;
        if(changed.size()&1)
            return res;
        map<int,int> mp;
        for(int i=0;i<changed.size();++i)
            mp[changed[i]]++;
        // if(mp.size()==1 and mp.find(0)!=mp.end()){
        //     int c=mp[0]/2;
        //     while(c--)
        //         res.push_back(0);
        //     return res;
        // }
        for(auto i:mp){
            if(i.second==0 or mp[i.first*2]==0)
                continue;
            if(mp.find(i.first*2)!=mp.end()){
                int common=min(mp[i.first*2],mp[i.first]);
                if(i.first==0 and i.second%2==0){
                    common=i.second/2;
                }
                mp[i.first*2]-=common;
                mp[i.first]-=common;
                while(common--)
                res.push_back(i.first);
            }
        }
        for(auto i:mp){
            if(i.second>0)
                return {};
        }
        return res;
    }
};