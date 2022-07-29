class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans=float('-inf');
        i=0
        j=len(height)-1
        while(i<j):
            ans=max(ans,min(height[j],height[i])*(j-i))
            if(height[i]<height[j]):
                i+=1
            else:
                j-=1
        return ans