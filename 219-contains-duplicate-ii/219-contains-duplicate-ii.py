class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        di=dict()
        for i in nums:
            di[i]=[]
        for i in range(len(nums)):
            di[nums[i]].append(i)
        for key,value in di.items():
            for m in range(1,len(value)):
                if value[m]-value[m-1]<=k:
                    return True
        return False