class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=0;
        do{
            if(k==1)
                break;
            k++;
        }while(next_permutation(nums.begin(),nums.end()));
    }
};