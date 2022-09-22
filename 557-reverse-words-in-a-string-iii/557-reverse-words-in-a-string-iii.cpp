class Solution {
public:
    string res="";
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            res+=word;
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};