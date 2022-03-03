class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;++i){
            int diff=nums[i+1]-nums[i];
            int local_count=1;
            for(int j=i;j<nums.size()-1;++j){
                if(nums[j+1]-nums[j]==diff){
                    local_count++;
                    if(local_count>=3)
                        count++;
                }
                else
                    break;
            }
        }
        return count;
    }
};