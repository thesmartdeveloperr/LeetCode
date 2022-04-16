class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int n=height.size();
        vector<int> left(height.size()),right(height.size());
        left[0]=left[n-1]=right[0]=right[n-1]=-1;
        int mx=height[n-1];
        for(int i=n-2;i>0;--i){
            mx=max(mx,height[i]);
            if(height[i]<=mx)
                right[i]=mx;
            else
                right[i]=0;
        }
        mx=height[0];
        for(int i=1;i<n-1;++i){
            mx=max(mx,height[i]);
            if(height[i]<=mx)
                left[i]=mx;
            else
                left[i]=0;
        }
        for(int i=1;i<n-1;++i){
            int level=min(left[i],right[i]);
            if(level-height[i]>0)
                water+=level-height[i];
        }
        return water;
    }
};