n= int(input())
nums=[]
for i in range(n):
    temp =int(input())
    nums.append(temp)

temp= nums[0]
j=1
for i in range(1,n):
    if(temp==nums[j]):
        nums.pop(j)
        n=n-1
    else:
        temp=nums[j]
        j+=1
for i in nums:
    print(i)
