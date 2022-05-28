class Solution {
public:
    int split(string s){
        int res=0;
        stringstream ss(s);
        string word;
        while(ss>>word) res++;
        return res;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        string res="";
        map<string,int> mp;
        for(int i=0;i<senders.size();++i)
            mp[senders[i]]+=split(messages[i]);
        int words=INT_MIN;
        for(auto i:mp){
            if(i.second>=words){
                words=i.second;
                if(res<i.first)
                    res=i.first;
            }
        }
        return res;
    }
};