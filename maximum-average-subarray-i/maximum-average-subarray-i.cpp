class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res=0;
        double n=nums.size();
        vector<double> v;
        for(double i=0;i<n;++i){
            if(i<k){
                res+=nums[i];
                continue;
            }
            v.push_back(res);
            res-=nums[i-k];
            res+=nums[i];
        }
        v.push_back(res);
        double tmp=*max_element(v.begin(),v.end())/k;
        return tmp;
    }
};