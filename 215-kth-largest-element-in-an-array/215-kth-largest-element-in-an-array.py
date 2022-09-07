class Solution:
    # sort-> merge sort O(nlogn)
    #python sort-> tim sort
    def findKthLargest(self, nums: List[int], k: int) -> int:
        hp=heapq.heapify(nums)
        lis=heapq.nlargest(k,nums)
        return lis[-1]
        
        