class Solution:
    def check(self, a: List[int]) -> bool:
        c=0
        n=len(a)
        for i in range(n):
            if a[i]>a[(i+1)%n]:
                c+=1
        return c<=1
        
            
        
