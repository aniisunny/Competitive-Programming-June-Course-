#from collections import defaultdict
class Solution:
    def groupAnagrams(self, s: List[str]) -> List[List[str]]:
        
        # with sorted()
        # TC=NlogN (highly inefficient)
        
        '''
        d=dict()
        for i in s:
            base=''.join(sorted(i))
            if base not in d:
                d[base]=[i]
            else:
                d[base]+=[i]
        return d.values()
        '''  
        
        
    
        # without sorted()
        # Frequency array for generating sorted string
        
        def helper(s):
            
            a=[0]*26
            
            for i in range(len(s)):
                a[ord(s[i])-ord('s')]+=1
            
            base=''
            
            for i in range(26):
                c=a[i]
                base+=chr(i+ord('a'))*c
            return base
        
        d=dict()
        for i in s:
            base=helper(i)
            if base not in d:
                d[base]=[i]
            else:
                d[base]+=[i]
        return d.values()
        
