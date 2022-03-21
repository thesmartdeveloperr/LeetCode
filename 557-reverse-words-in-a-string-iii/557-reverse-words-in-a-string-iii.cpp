class Solution {
public:
    vector<string> split(string s){
        vector<string> res;
        stringstream ss(s);
        string word;
        while(ss>>word){
            res.push_back(word);
        }
        return res;
    }
    string reverseWords(string s) {
        vector<string> splitted=split(s);
        string res="";
        for(int i=0;i<splitted.size();++i){
            reverse(splitted[i].begin(),splitted[i].end());
            if(i<splitted.size()-1)
                res+=splitted[i]+" ";
            else
                res+=splitted[i];
        }
        return res;
    }
};