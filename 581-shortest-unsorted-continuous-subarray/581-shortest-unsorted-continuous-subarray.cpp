class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> res(nums);
        sort(res.begin(),res.end());
        int l=0,r=0;
        bool fl=0;
        for(int i=0;i<nums.size();++i){
            if(res[i]!=nums[i]){
                if(fl==0){
                    l=i;
                    fl=1;
                }
                else{
                    r=i;
                }
            }
        }
        if(l==0 and r==0)
            return 0;
        return r-l+1;
    }
};