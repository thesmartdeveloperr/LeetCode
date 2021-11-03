class Solution {
public:
    void calcCombinations(int ind,int target,vector<int>&candidates,vector<vector<int>>&res,vector<int>&ds){
        if(ind==candidates.size()){
            if(target==0)
            res.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            calcCombinations(ind,target-candidates[ind],candidates,res,ds);
            ds.pop_back();
        }
        calcCombinations(ind+1,target,candidates,res,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        calcCombinations(0,target,candidates,res,ds);
        return res;
    }
};