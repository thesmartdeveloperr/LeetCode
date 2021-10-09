class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos=-1;
        int beg=0,end=nums.size()-1,mid;
        while(beg<=end){
            mid=(beg+end)/2;
            if(nums[mid]==target){
                pos=mid;
                break;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        // if(pos==-1)
        //     pos=mid;
        if(pos==-1){
            for(int i=0;i<nums.size();++i){
                if(nums[i]>target&&i!=nums.size()-1){
                    pos=i;
                    break;
                }
                else if(nums[i]<target&&i==nums.size()-1){
                    pos=i+1;
                    break;
                }
                else if(nums[i]>target&&i==nums.size()-1){
                    pos=i;
                    break;
                }
            }
        }
        return pos;
    }
};