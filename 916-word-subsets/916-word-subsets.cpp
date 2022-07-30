class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> count(26);
        for(auto i:words2){
            vector<int> tmp=counter(i);
            for(int i=0;i<26;++i)
                count[i]=max(count[i],tmp[i]);
        }
        for(auto i:words1){
            vector<int> tmp=counter(i);
            int k=0;
            for(k=0;k<26;++k){
                if(tmp[k]<count[k])
                    break;
            }
            if(k==26)
                res.push_back(i);
        }
        return res;
    }
    vector<int> counter(string word){
        vector<int> res(26);
        for(auto i:word)
            res[i-'a']++;
        return res;
    }
};