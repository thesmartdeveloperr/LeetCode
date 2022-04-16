class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int n=height.size();
        int maxLeft=height[0];
        int maxRight=height[n-1];
        int left=1,right=n-2;
        while(left<=right){
            if(maxLeft<maxRight){
                if(height[left]>maxLeft)
                    maxLeft=height[left];
                else
                    water+=maxLeft-height[left];
                left++;
            }
            else{
                if(height[right]>maxRight)
                    maxRight=height[right];
                else
                    water+=maxRight-height[right];
                right--;
            }
        }
        return water;
    }
};