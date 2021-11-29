class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0,mini=INT_MAX;
        for(int i=0;i<prices.size();++i){
            mini=min(prices[i],mini);
            maxProf=max(prices[i]-mini,maxProf);
        }
        return maxProf;
    }
};