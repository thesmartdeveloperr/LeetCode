class Solution {
public:
    int maximum69Number (int num) {
        int res=0;
        vector<int> nums;
        while(num){
            nums.push_back(num%10);
            num/=10;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            if(nums[i]==6){
                nums[i]=9;
                break;
            }
        }
        for(int i=0;i<nums.size();++i)
            res+=nums[i]*pow(10,nums.size()-i-1);
        return res;
    }
};