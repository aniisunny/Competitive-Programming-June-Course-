class Solution:
    def removeElement(self, a: List[int], val: int) -> int:
        
        # Two pointer
        # TC=O(n)
        # SC=O(1)
        j=0
        for i in range(len(a)):
            if a[i]!=val:
                a[j]=a[i]
                j+=1
        return j
                
        
