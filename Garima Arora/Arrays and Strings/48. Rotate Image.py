class Solution:
    def rotate(self, a: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # 1. Transpose matrix (Not transposing all the elements, keeping primary diagonal as is)
        # 2. Reversing each row
        
        n=len(a)
        for i in range(n):
            for j in range(i+1,n):
                a[i][j],a[j][i]=a[j][i],a[i][j]
        for i in range(n):
            s,e=0,n-1
            while s<e:
                a[i][s],a[i][e]=a[i][e],a[i][s]
                s+=1
                e-=1
