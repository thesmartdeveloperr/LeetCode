class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int val=0;
            for(auto i:piles)
                val+=ceil(i+mid-1)/mid;
            if(val>h)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};