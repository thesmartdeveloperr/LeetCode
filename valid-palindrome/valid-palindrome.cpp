class Solution {
public:
    bool isPalindrome(string s) {
        string tmp="";
        for(int i=0;i<s.size();++i){
            if(isalnum(s[i]) and s[i]!=':' and s[i]!=',' and s[i]!='.' and s[i]!=' ')
                tmp+=tolower(s[i]);
        }
        int i=0,j=tmp.size()-1;
        cout<<tmp<<endl;
        while(i<j){
            if(tmp[i]!=tmp[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};