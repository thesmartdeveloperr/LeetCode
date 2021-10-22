class Solution {
public:
    string frequencySort(string s) {
        string res="";
        vector<pair<int,char>> hash('z'+1,{0,0});
        for(auto i:s)
            hash[i]={hash[i].first+1,i};
        sort(hash.begin(),hash.end());
        for(auto p:hash)
            res=string(p.first,p.second)+res;
        return res;
    }
};