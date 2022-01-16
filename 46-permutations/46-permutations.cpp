class Solution {
public:
    void findPermutations(vector<int>&tmp,vector<int>&nums,vector<vector<int>>&res,vector<int>&mp){
        if(tmp.size()==nums.size()){
            res.push_back(tmp);
            return;
        }
        //pick one element(which is not yet picked)
        for(int i=0;i<nums.size();++i){
            if(!mp[i]){
                tmp.push_back(nums[i]);
                mp[i]=1;
                findPermutations(tmp,nums,res,mp);
                mp[i]=0;
                tmp.pop_back();   
            }   
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> res;
        vector<int> tmp;
        vector<int> mp(nums.size(),0);
        findPermutations(tmp,nums,res,mp);
        return res;
    }
};