class Solution:
    def twoSum(self, a: List[int], target: int) -> List[int]:
        '''
        # Brute Force 
        # TC=O(n^2)
        
        n=len(a)
        for i in range(n):
            for j in range(i+1,n):
                if a[i]+a[j]==target:
                    return(i,j)
        '''
        # Better
        # Dictionary
        
        d=dict()
        for i in range(len(a)):
            if a[i] in d:
                return d[a[i]],i
            else:
                d[target-a[i]]=i
