class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        map<char,int> mp;
        int sum=0;
        for(int i=0;i<s.size();++i)
            mp[s[i]]=i;
        for(int i=0;i<s.size();++i){
            int last_idx=mp[s[i]];
            for(int j=i+1;j<last_idx;++j)
                last_idx=max(last_idx,mp[s[j]]);
            i=last_idx;
            res.push_back(i+1-sum);
            sum=i+1;
        }
        return res;
    }
};