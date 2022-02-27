class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& vec) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> m;
        for(int i=0;i<vec.size();i++)
            m[vec[i]].push_back(i);
        for(auto i:m){
            int k=i.first;
            int ind=0;
            while(ind!=m[k].size()){
                vector<int> temp;
                for(int i=ind;i<ind+k;i++)
                    temp.push_back(m[k][i]);
                ind+=k;
                res.push_back(temp);
            }
        }
        return res;
    }
};