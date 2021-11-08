class Solution:
    def twoSum(self, a: List[int], target: int) -> List[int]:
        n=len(a)
        s=0
        e=n-1
        while s<e:
            if a[s]+a[e]==target:
                return s+1,e+1
            if a[s]+a[e]>target:
                e-=1
            else:
                s+=1
        return -1
        
