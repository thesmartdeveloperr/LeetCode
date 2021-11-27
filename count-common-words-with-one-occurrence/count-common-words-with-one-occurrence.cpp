class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int res=0;
        map<string,int> mp1,mp2;
        for(auto i:words1)
            mp1[i]++;
        for(auto i:words2)
            mp2[i]++;
        for(auto i:words2){
            if(mp1[i]==1 and mp2[i]==1)
                res++;
        }
        return res;
    }
};