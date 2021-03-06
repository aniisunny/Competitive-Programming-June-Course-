# -*- coding: utf-8 -*-
"""451. Sort Characters By Frequency

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1FvToMi-Q0ykhAQvzJP4VjalkP4KndOWU
"""

from collections import defaultdict

class Solution:
    def frequencySort(self, s: str) -> str:
        d=dict()
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        di=defaultdict(list)
        
        maxf=0
        
        for k,v in d.items():
            di[v].append(k)
            maxf=max(maxf,v)
        #print(di)
        #print(d)
        res=[]
        for i in range (maxf,0,-1):
            if i in di:
                for c in di[i]:
                    res.extend([c]*i)
        return "".join(res)
    
        '''d=dict()
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        print(d)
        '''
        '''
        
        c1, c2 = Counter(s), {}
        for k,v in c1.items():
            c2.setdefault(v, []).append(k*v)
        return "".join(["".join(c2[i]) for i in range(len(s), -1, -1) if i in c2])'''