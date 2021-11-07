class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        # Frequency array
        # TC=O(2n)=O(n)
        # SC=O(26)=O(1)
        
        l=[0]*26
        for i in s:
            l[ord(i)-ord('a')]+=1
        for i in range(len(s)):
            if l[ord(s[i])-ord('a')]==1:
                return i
        return -1
        
        
        
        
        
        '''
        # Dictionary
        
        d=dict()
        for ch in s:
            if ch not in d:
                d[ch]=1
            else:
                d[ch]+=1
        index=-1
        for i in range(len(s)):
            if d[s[i]]==1:
                index=i
                break
        return index
        '''
    
