#User function Template for python3

class Solution:
    def firstNonRepeating(self, arr, n): 
        # Complete the function
        dic={}
        for i in range(len(arr)):
            dic[arr[i]]=dic.get(arr[i],0)+1
        for i in range(len(arr)):
            if dic[arr[i]]==1:
                return arr[i]
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