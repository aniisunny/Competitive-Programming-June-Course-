class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        # Frequency array
        
        def ana(s):
        
            l=[0]*26

            for i in s:
                l[ord(i)-ord('a')]+=1
            t=''
            for i in range(26):
                t+=chr(i+ord('a'))*l[i]
            return t
        
        return ana(s)==ana(t)
