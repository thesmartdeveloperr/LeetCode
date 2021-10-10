class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        if(n%2==0)
            ans=(n/2) * 2 -1;
        else
            ans=((n-1)/2) *2;
        return ans;
    }
};