class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        unordered_map<string,int> mp1;
        for(auto i:words)
            mp1[i]++;
        int n=words[0].size();
        int ct=0;
        for(int i=0;i<s.size()-n*words.size()+1;++i){
            unordered_map<string,int> mp2;
            string tmp=s.substr(i,n*words.size());
            for(int j=0;j<tmp.size();j+=n){
                string Tmp=tmp.substr(j,n);
                mp2[Tmp]++;
            }
            if(mp1==mp2)
                res.push_back(i);
        }
        return res;
    }
};