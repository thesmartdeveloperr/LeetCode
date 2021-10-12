class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        while(j<=s.size()){
            if(s[j]==' '||j==s.size()){
                reverse(&s[i],&s[j]);
                i=j+1;
            }
            j++;
        }
        return s;
    }
};