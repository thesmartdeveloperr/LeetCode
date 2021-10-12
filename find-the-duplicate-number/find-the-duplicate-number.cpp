class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         int slow=nums[0],fast=nums[0];
//         do{
//             slow=nums[slow];
//             fast=nums[nums[fast]];
//         }while(slow!=fast);
        
//         fast=nums[0];
//         while(slow!=fast){
//             slow=nums[slow];
//             fast=nums[fast];
//         }
//         return slow;
        int res=0;
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp)
            if(i.second>=2)
                return i.first;
        return res;
    }
};