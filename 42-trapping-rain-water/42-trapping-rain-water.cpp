class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int n=height.size();
        vector<int> left(n),right(n);
        int mx=height[n-1];
        for(int i=n-2;i>0;--i){
            mx=max(mx,height[i]);
            right[i] = height[i] <= mx ? mx : 0;
        }
        mx=height[0];
        for(int i=1;i<n-1;++i){
            mx=max(mx,height[i]);
            left[i] = height[i] <= mx ? mx : 0;
        }
        for(int i=1;i<n-1;++i)
            water += min(left[i],right[i]) - height[i];
        return water;
    }
};