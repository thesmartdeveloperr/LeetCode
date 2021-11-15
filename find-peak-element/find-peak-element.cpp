class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0,j=nums.size()-1,res=INT_MIN,pos=0;
        while(i<=j){
            if(nums[i]>res){
                res=nums[i];
                pos=i;                
            }
            if(nums[j]>res){
                res=nums[j];
                pos=j;
            }
            i++;
            j--;
        }
        return pos;
    }
};