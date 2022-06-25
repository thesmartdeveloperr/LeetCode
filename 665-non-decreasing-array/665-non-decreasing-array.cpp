class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            if(i==0){
                int tmp=nums[i];
                nums[i]=-1e6;
                if(is_sorted(nums.begin(),nums.end()))
                    return true;
                nums[i]=tmp;
            }
            else if(i==nums.size()-1){
                int tmp=nums[i];
                nums[i]=1e6;
                if(is_sorted(nums.begin(),nums.end()))
                    return true;
                nums[i]=tmp;
            }
            else{
                int tmp=nums[i];
                nums[i]=nums[i-1];
                if(is_sorted(nums.begin(),nums.end()))
                    return true;
                nums[i]=tmp;
            }
        }
        return false;
    }
};