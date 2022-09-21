class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        int even_sum=0;
        for(auto i:nums)
            if(i%2==0)
                even_sum+=i;
        for(int i=0;i<queries.size();++i){
            int ind=queries[i][1];
            int prev=nums[ind];
            nums[ind]+=queries[i][0];
            int check1=(prev%2==0)?prev:0;
            int check2=nums[ind]%2==0?nums[ind]:0;
            int sum=even_sum-check1+check2;
            res.push_back(sum);
            even_sum=sum;
        }
        return res;
    }
};