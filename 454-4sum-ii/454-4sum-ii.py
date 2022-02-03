class Solution:
    def fourSumCount(self, nums1: List[int], nums2: List[int], nums3: List[int], nums4: List[int]) -> int:
        dic=dict()
        for i  in nums1:
            for j in nums2:
                dic[i+j]=dic.get(i+j,0)+1
        ct=0
        for k in nums3:
            for l in nums4:
                ct+=dic.get(-(k+l),0)
        
        return ct