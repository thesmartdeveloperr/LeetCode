class Solution {
public:
    void combinations(int i,int n,vector<int> &candidates,vector<int> &tmp,vector<vector<int>> &res,int target){
        if(i==n){
            if(target==0){
                res.push_back(tmp);
            }
            return;
        }
        if(candidates[i]<=target){
            tmp.push_back(candidates[i]);
    combinations(i,n,candidates,tmp,res,target-candidates[i]);              tmp.pop_back();
        }
        combinations(i+1,n,candidates,tmp,res,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        combinations(0,candidates.size(),candidates,temp,res,target);
        return res;
    }
};