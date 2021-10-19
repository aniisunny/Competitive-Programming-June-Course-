# -*- coding: utf-8 -*-
"""3. Longest Substring Without Repeating Characters

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1_O2jTS98mmGwWxGZ5czYTxeeMQNr0xDn
"""

class Solution:
    def lengthOfLongestSubstring(self, a: str) -> int:
        
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