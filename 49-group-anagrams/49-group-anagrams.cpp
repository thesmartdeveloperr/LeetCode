class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        for(auto i:strs){
            string tmp=i;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(i);
        }
        for(auto i:mp){
            vector<string> tmp;
            int j=0;
            while(j<i.second.size()){
                tmp.push_back(i.second[j++]);
            }
            res.push_back(tmp);
        }
        return res;
    }
};