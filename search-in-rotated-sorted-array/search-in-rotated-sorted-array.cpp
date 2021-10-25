class Solution {
public:
    int search(vector<int>& nums, int target) {
        int res=-1,index=0;
        for(auto i:nums){
            if(i==target)
                return index;
            index++;
        }
        return res;
    }
};