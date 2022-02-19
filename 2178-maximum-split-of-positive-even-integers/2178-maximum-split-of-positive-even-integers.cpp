class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> res;
        if(finalSum%2==1)
            return res;
        long long x=2;
        long long sum=0;
        
        while(sum+x <= finalSum){
            res.push_back(x);
            sum+=x;
            x+=2;
        }
		int size = res.size();
        res[size-1] += (finalSum-sum);
        return res;
    }
};