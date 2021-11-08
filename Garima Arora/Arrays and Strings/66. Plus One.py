class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        '''if len(digits)==1:
            if digits[0]==9:
                return [1,0]
            else:
                digits[0]+=1
                return digits
        l=len(digits)-1
        while l==9:
            digits[l]=0
            l-=1
        if l<0:
            digits=[1]+digits
        else:
            digits[l]+=1
        return digits'''
    
        for i in range(len(digits)-1, -1, -1):
            if digits[i] != 9:
                digits[i] += 1
                return digits
            digits[i] = 0
        return [1] + digits
