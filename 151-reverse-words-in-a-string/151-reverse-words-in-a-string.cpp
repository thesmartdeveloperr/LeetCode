class Solution {
public:
    string reverseWords(string s) {
        string res="";
        stack<string> tmp;
        stringstream ss(s);
        string word;
        while(ss>>word)
            tmp.push(word);
        while(tmp.size())
            res+=tmp.size()==1?tmp.top():tmp.top()+" ",tmp.pop();
        return res;
    }
};