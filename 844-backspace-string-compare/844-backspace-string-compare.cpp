class Solution {
public:
    string calc(string s){
        int ct=0;
        string a="";
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]=='#'){
                ct++;
            }
            else{
                if(ct>0)
                    ct--;
                else
                    a+=s[i];
            }
        }
        return a;
    }
    bool backspaceCompare(string s, string t) {
        return calc(s)==calc(t);
    }
};