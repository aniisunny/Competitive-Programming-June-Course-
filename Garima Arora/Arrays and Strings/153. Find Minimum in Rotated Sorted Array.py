class Solution:
    def findMin(self, a: List[int]) -> int:
        # Brute Force: Linear Search (find min directly or as follows)
        # TC=O(n)
        
        '''
        n=len(a)
        for i in range(n-1):
            if a[i]>a[i+1]:
                return a[i+1]
        return a[0]
        '''
        # Optimal Approach
        # Binary Search
        
        start=0
        end=len(a)-1
        n=len(a)
        
        while start<=end:
            if a[start]<=a[end]:
                return a[start]
            mid=start+(end-start)//2
            nex=(mid+1)%n
            pre=(mid+n-1)%n
            if a[mid]<=a[nex] and a[mid]<=a[pre]:
                return a[mid]
            if a[start]<=a[mid]:
                start=mid+1
            elif a[mid]<=a[end]:
                end=mid-1
        return -1
        
        
        
        
        
        '''
        l,h=0,len(a)-1
        while l<h:
            mid=(l+h)//2
            if a[mid]>a[h]:
                l=mid+1
            else:
                h=mid
        return a[l]
        '''
