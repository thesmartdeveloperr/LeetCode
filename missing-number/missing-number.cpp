class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // vector<int> hash_table(nums.size()+1);
        // for(int i=0;i<nums.size();++i)
        //     hash_table[nums[i]]++;
        // int res=0;
        // for(int i=1;i<hash_table.size();++i){
        //     if(hash_table[i]==0){
        //         res=i;
        //         break;
        //     }
        // }
        // return res;
        
        //now we are using Cyclic Sort...
//         int i=0,n=nums.size();
//         while(i<n){
//             int tmp=nums[i];
//             if(nums[i]!=nums[tmp]&&nums[i]<n)
//                 swap(nums[i],nums[tmp]);
//             else
//                 i++;
//         }
//         for(int index=0;index<n;++index)
//         if(nums[index]!=index)
//         return index;
        
//         return nums.size();
        int ans;
    for(int i=0;i<nums.size();){
        if(i==nums[i] || nums[i] >= nums.size()){
            i++;
            continue;
        }
        else{
            swap(nums[i], nums[nums[i]]);
        }
    }
    for(int i=0;i<nums.size();i++){
        if(i != nums[i]){
            ans = i;
        }
    }
    return ans;
    }
};