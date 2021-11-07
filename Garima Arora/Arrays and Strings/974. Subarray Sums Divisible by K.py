from collections import defaultdict
class Solution:
    def subarraysDivByK(self, a: List[int], k: int) -> int:
        d=defaultdict(int)
        s=0
        r=0
        c=0
        d[0]=1
        for i in range(len(a)):
            s+=a[i]
            r=s%k
            if r<0:
                r+=k
            c+=d[r]
            d[r]+=1
            '''
            if r in d:
                c+=d[r]
                d[r]+=1
            else:
                d[r]=1
            '''
        return c
        
    
