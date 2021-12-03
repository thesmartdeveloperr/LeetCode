class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int res=INT_MIN,tmp_res=1;
        // for(int i=0;i<nums.size();++i){
        //     tmp_res*=nums[i];
        //     if(tmp_res>res)
        //         res=tmp_res;
        //     if(tmp_res<=0 and i<nums.size()-1 and nums[i+1]>-1)
        //         tmp_res=1;
        // }
        // return res;
        int res=INT_MIN,tmp=1;
        int n=nums.size();
        for(int i=0;i<n;++i){
            tmp=1;
            for(int j=i;j<n;++j){
                tmp*=nums[j];
                res=max(res,tmp);
            }
        }
        return res;
    }
};