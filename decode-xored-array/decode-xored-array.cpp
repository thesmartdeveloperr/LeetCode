class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        for(int i=0;i<encoded.size();++i){
            if(i==0)
            res.push_back(first);
            
            res.push_back(res[res.size()-1]^encoded[i]);
        }
        return res;
    }
};