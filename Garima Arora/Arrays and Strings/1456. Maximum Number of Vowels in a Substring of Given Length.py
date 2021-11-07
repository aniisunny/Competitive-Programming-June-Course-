class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        ans=0
        vowels = {'a', 'e', 'i', 'o', 'u'}
        
        for i in range(k):
            if s[i] in vowels:
                ans+=1
        c=ans
        for i in range(len(s)-k):
            if s[i] in vowels:
                c-=1
            if s[i+k] in vowels:
                c+=1
            ans=max(ans,c)
        return ans
        
