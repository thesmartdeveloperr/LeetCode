class Solution {
public:
    int minDeletions(string s) {
        int res=0;
        map<int,int> m;
        for(auto i:s)
            m[i]++;
        map<int,queue<char>> mp;
        for(auto i:m){
            mp[i.second].push(i.first);
        }
        for(auto i:mp){
            auto q=i.second;
            while(q.size()>1){
                auto x=q.front();
                q.pop();
                res++;
                int tmp=i.first-1;
                while(mp.find(tmp)!=mp.end() and tmp!=0){
                    tmp--;
                    res++;
                }
                mp[tmp].push(x);
            }
        }
        return res;
    }
};