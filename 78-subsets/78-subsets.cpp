class Solution {
public:
    void f(int i,int n,vector<int> &nums,vector<int> &tmp,vector<vector<int>> &res){
        if(i==n){
            res.push_back(tmp);
            return;
        }
        
        tmp.push_back(nums[i]);
        f(i+1,n,nums,tmp,res);
        tmp.pop_back();
        f(i+1,n,nums,tmp,res);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        f(0,nums.size(),nums,temp,res);
        return res;
    }
};