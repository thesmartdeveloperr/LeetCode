class Solution {
public:
    vector<vector<int>> res;
    void findCombinations(int i,vector<int> &tmp,vector<int> &candidates,int n,int target){
        if(i==n){
            if(target==0){
                res.push_back(tmp);
            }
            return;
        }
        //picking the element
       if(candidates[i]<=target){
            tmp.push_back(candidates[i]);
            findCombinations(i,tmp,candidates,n,target-candidates[i]);
            tmp.pop_back();   
       }
        //not picking the element
        findCombinations(i+1,tmp,candidates,n,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
     findCombinations(0,tmp,candidates,candidates.size(),target);
        return res;
    }
};