class Solution {
public:
    int largestInteger(int num) {
        string nums=to_string(num);
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                int one=(int)(nums[i]);
                int two=(int)(nums[j]);
                if(one%2==two%2 and one<two)
                    swap(nums[i],nums[j]);
            }
        }
        return stoi(nums);
    }
};