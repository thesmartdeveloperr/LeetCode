class Solution {
public:
    vector<string> split(string s){
        stringstream ss(s);
        string word;
        vector<string> res;
        while(ss>>word){
            res.push_back(word);
        }
        return res;
    }
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        for(int i=0;i<paths.size();++i){
                vector<string> spl=split(paths[i]);
                string directory_path=spl[0];
                for(int k=1;k<spl.size();++k){
                    string file_plus_data=spl[k];
                    int n=spl[k].size();
                    int m=0;
                    string file_name="";
                    while(m<n and file_plus_data[m]!='('){
                        file_name+=file_plus_data[m];
                        m++;
                    }
                    string content="";
                    m++;
                    while(m<n-1){
                        content+=file_plus_data[m];
                        m++;
                    }
                    mp[content].push_back(directory_path+"/"+file_name);
                }
        }
        for(auto i:mp){
            if(i.second.size()>1){
                vector<string> tmp;
                for(auto j:i.second)
                    tmp.push_back(j);
                res.push_back(tmp);
            }
        }
        return res;
    }
};