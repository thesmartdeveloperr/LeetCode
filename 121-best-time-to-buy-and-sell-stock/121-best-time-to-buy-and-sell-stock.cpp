class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=prices.back();
        vector<int> copy(prices);
        for(int i=prices.size()-1;i>=0;--i){
            copy[i]=mx-prices[i];
            mx=max(mx,prices[i]);
        }
        return *max_element(copy.begin(),copy.end());
    }
};