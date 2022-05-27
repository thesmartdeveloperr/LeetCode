class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        if(stockPrices.size()==1)
            return 0;
        int res=1;
        sort(stockPrices.begin(),stockPrices.end());
        for(int i=2;i<stockPrices.size();++i){
            long long x1=stockPrices[i-2][0],x2=stockPrices[i-1][0],x3=stockPrices[i][0];
            long long y1=stockPrices[i-2][1],y2=stockPrices[i-1][1],y3=stockPrices[i][1];
            long long diff1,diff2;
            diff1=(y3-y2)*(x2-x1);
            diff2=(y2-y1)*(x3-x2);
            if(diff1!=diff2)
                res++;
        }
        return res;
    }
};