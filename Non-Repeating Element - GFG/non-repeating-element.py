#User function Template for python3

class Solution:
    def firstNonRepeating(self, arr, n): 
        # Complete the function
        dic={}
        for i in arr:
            dic[i]=dic.get(i,0)+1
        for i in arr:
            if dic[i]==1:
                return i
        return -1


#{ 
#  Driver Code Starts
#Initial Template for Python 3

from collections import defaultdict 

for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.firstNonRepeating(arr, n))
    
# } Driver Code Ends