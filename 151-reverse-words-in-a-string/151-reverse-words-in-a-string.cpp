class Solution {
public:
    string reverseWords(string s) {
        string res="";
        vector<string> tmp;
        stringstream ss(s);
        string word;
        while(ss>>word){
            tmp.push_back(word);
        }
        for(int i=tmp.size()-1;i>=0;--i){
            if(i>0)
                res+=tmp[i]+" ";
            else
                res+=tmp[i];
        }
        return res;
    }
};