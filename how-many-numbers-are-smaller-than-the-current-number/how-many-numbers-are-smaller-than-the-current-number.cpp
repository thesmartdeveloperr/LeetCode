class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        // vector<int> copy(nums.begin(),nums.end());
        // sort(nums.begin(),nums.end());
        // unordered_map<int,int> ump;
        // int k=0;
        // for(auto i:nums)
        //     ump[i]=k++;
        // for(auto i:copy){
        //     res.push_back(ump[i]);
        // }
        for(int i=0;i<nums.size();++i){
            int temp=nums[i];
            int count=0;
            for(int j=0;j<nums.size();++j){
                if(nums[j]<temp and j!=i)
                    count++;
            }
            res.push_back(count);
        }
        return res;
    }
};