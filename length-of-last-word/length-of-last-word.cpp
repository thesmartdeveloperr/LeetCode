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
    int lengthOfLastWord(string s) {
        vector<string> splitted=split(s);
        return splitted[splitted.size()-1].size();
    }
};