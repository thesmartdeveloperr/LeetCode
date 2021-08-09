class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestStreak=0;
        set<int> hashSet;
        for(int i:nums)
            hashSet.insert(i);

        for(int num:nums){
            if(!hashSet.count(num-1)){
                int currentNum=num;
                int currentStreak=1;
                while(hashSet.count(currentNum+1)){
                    currentNum++;
                    currentStreak++;
                }
                longestStreak=max(longestStreak,currentStreak);
            }
        }
        // int Max=nums[0];
        // for(int i=1;i<nums.size();++i)
        //     if(Max<nums[i])
        //         Max=nums[i];
        // vector<int> hash(Max+1,0);
        // for(int i=0;i<nums.size();++i)
        //     hash[nums[i]]++;
        // int counter=0;
        // for(int i=0;i<hash.size();++i){
        //     if(hash[i]>0){
        //         counter++;
        //         longestStreak=max(longestStreak,counter);
        //     }
        //     else
        //     counter=0;
        // }
        return longestStreak;
    }
};