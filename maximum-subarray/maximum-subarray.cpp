class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        //using kadane's algorithm to solve this question.
        int sum=0,tmp_sum=0;
        int m=*max_element(arr.begin(),arr.end());
        if(m<0)
            return m;
        for(int i=0;i<arr.size();++i){
            tmp_sum+=arr[i];
            if(tmp_sum>sum)
                sum=tmp_sum;
            if(tmp_sum<0)
                tmp_sum=0;
        }
        return sum;
    }
};