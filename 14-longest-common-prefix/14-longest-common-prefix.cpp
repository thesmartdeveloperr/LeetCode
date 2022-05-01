class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==1)
            return strs[0];
        string cand=strs[0];
        for(int i=0;i<cand.size();++i){
            int ct=0;
            for(int j=0;j<strs.size();++j){
                if(strs[j][i]==cand[i])
                    ct++;
            }
            if(ct==strs.size()){
                res+=cand[i];
            }
            else{
                break;
            }
        }
        return res;
    }
};