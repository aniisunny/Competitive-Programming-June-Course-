class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        
        n=len(nums)
        s=0
        maxs=nums[0]
        for i in range(n):
            s+=nums[i]
            maxs=max(maxs,s)
            if s<0:
                s=0
        return maxs
