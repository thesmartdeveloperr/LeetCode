class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i){ if(accumulate(nums.begin(),nums.begin()+i,0)==accumulate(nums.begin()+i+1,nums.end(),0))
                return i;
        }
        if(accumulate(nums.begin(),nums.end()-1,0)==0)
            return nums.size()-1;
        if(accumulate(nums.begin()+1,nums.end(),0)==0)
            return 0;
        return -1;
    }
};