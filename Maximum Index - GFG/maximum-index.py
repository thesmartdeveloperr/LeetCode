#User function Template for python3
class Solution:

	def maxIndexDiff(self,arr,n):
		#code here
		left=[0]*n
		right=[0]*n
		mn=float('inf')
		mx=float('-inf')
		for i in range(0,n):
		    mn=min(mn,arr[i])
		    left[i]=mn
	    for i in range(n-1,-1,-1):
		    mx=max(mx,arr[i])
		    right[i]=mx
		i=0
		j=0
		ans=float('-inf')
		while i<n and j<n:
		    if(left[i]<=right[j]):
		        ans=max(ans,j-i)
		        j+=1
            else:
                i+=1
        return ans
#{ 
#  Driver Code Starts
if __name__ == "__main__":
	t = int(input())
	while(t>0):
		num = int(input())
		arr = [int(x) for x in input().strip().split()]
		ob = Solution()
		print(ob.maxIndexDiff(arr,num))
		t-=1
# } Driver Code Ends