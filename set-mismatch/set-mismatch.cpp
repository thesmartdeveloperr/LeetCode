class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> ump;
        for(auto i:nums)
            ump[i]++;
        for(auto i:ump){
            if(i.second==2){
                res.push_back(i.first);
                break;
            }
        }
        for(int i=1;i<=ump.size()+1;++i){
            if(ump.find(i)==ump.end()){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};