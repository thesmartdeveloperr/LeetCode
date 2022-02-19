class Solution {
public:
    int balancedStringSplit(string s) {
        int res=0;
        int tmp=0;
        for(auto i:s){
            if(i=='R')
                tmp++;
            else
                tmp--;
            if(tmp==0)
                res++;
        }
        return res;
    }
};