class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int res=INT_MIN;
        while(i<=j){
            int h=min(height[i],height[j]);
            res=max(res,h*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return res;
    }
};