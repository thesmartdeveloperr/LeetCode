class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
       vector<vector<int>> res;
        int i=0,tmp=0;
        while( i < s.size()-1){
            if(s[i]==s[i+1])
                i++;
            else{
                if(abs(tmp-i)>1)
                {
                    res.push_back({tmp,i});
                }
                tmp=i+1;
                i++;
            }
        }
        if(abs(tmp-i)>1)
            res.push_back({tmp,i});
        return res;
    }
};