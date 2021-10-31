class Solution:
    def lengthOfLongestSubstring(self, a: str) -> int:
        
        # Brute Force
        # TC=O(N^2)
        # TLE
        '''
        n=len(a)
        mlen=0
        for i in range(n):
            s=''
            for j in range(i,n):
                s+=a[j]
                if len(s)==len(set(s)):
                    mlen=max(mlen,len(s))
        return mlen
        '''
        # Better
        # Two pointers approach
        # TC=O(2N)
        '''
        n=len(a)
        l=0
        s=set()
        maxi=0
        for r in range(n):
            while a[r] in s:
                l+=1
         '''       
        # Optimal
        # Two pointers
        # TC=O(N)
        n=len(a)
        if len(a)<=0:
            return 0
        l=r=maxs=0
        d=dict()
        for r in range(n):
            if a[r] in d:
                l=max(l,d[a[r]]+1)
            d[a[r]]=r
            maxs=max(maxs,r-l+1)
        return maxs
