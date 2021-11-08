#from collections import defaultdict
class Solution:
    def threeSum(self, a: List[int]) -> List[List[int]]:
        
        # Brute Force
        # TLE
        # TC=O(N^3logm)    # m: size of set
        # SC=O(m)
        # Sorting will eliminate duplicate triplet elements. For [-1,0,1,2,-1,-4] sort() would return output=[[-1,-1,2],[-1,0,1]]. But the code without the sort() function would return output=[[-1,0,1],[-1,2,-1],[0,1,-1]]. This is because set vector considers [-1,0,1] & [0,1,-1] to be unique elements. Also, in the code with sort() case, the nested for loop indexes will always obey nums[i]<=nums[j]<=nums[k]. So, the case of [0,1,-1] will not exist in any for loop iteration as the nums array vector is sorted.
        
        '''
        res=set()
        a=sorted(a)
        #print(a)
        n=len(a)
        for i in range(n):
            for j in range(i+1,n):
                for k in range(j+1,n):
                    if a[i]+a[j]+a[k]==0:
                        res.add((a[i],a[j],a[k]))
        return res
        '''
        
        # Better Approach
        # Hashing
        # TC=O(N^2logM)
        # SC= O(N+M)
        # Need to check
        
        '''
        #a=sorted(a)
        n=len(a)
        d=dict()
        
        s=set()
        for i in range(n):
            if a[i] not in d:
                d[a[i]]=1
            else:
                d[a[i]]+=1
        #print(d)
        for i in range(n):
            d[a[i]]-=1
            for j in range(i+1,n):
                d[a[j]]-=1
                c=-(a[i]+a[j])
                #print(a[i],a[j])
                #print(d)
                #print(s)
                if c in d and d[c]>=1:
                    s.add(tuple(sorted((a[i],a[j],c))))
                d[a[j]]+=1
            d[a[i]]+=1
                
            
        return s
        
        '''
        
        # Most Optimal
        # Two pointers
        # Take 'a' as constant upto last third element and find the other two elements ahead of it. (same as 2 sum, need to find negative of 'a' to make the entire sum as 0)
        # TC=O(N*N)
        # SC=O(logM) # Auxiliary space, hence can be ignored
        
        res=[]
        a.sort()
        
        for i in range(len(a)-2):   
            if i>0 and a[i]==a[i-1]:
                continue
            l,r=i+1,len(a)-1
            
            while l<r:
                if a[i]+a[l]+a[r]==0:
                    res.append((a[i],a[l],a[r]))
                    while l<r and a[l]==a[l+1]:
                        l+=1
                    while l<r and a[r]==a[r-1]:
                        r-=1
                    l+=1
                    r-=1
                elif a[i]+a[l]+a[r]<0:
                    l+=1
                else:
                    r-=1
        return res       
