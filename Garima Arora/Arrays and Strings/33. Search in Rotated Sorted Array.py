class Solution:
    def search(self, a: List[int], target: int) -> int:
        n=len(a)
        if n==1:
            if a[0]==target:
                return 0
            else:
                return -1
        if a[0]==target:
            return 0
        elif a[n-1]==target:
            return n-1
        start=0
        end=len(a)-1
        
        while end-start>1:
            mid=start+(end-start)//2
            if a[mid]>=a[start]: 
                start=mid
            else:
                end=mid
        print(start)
