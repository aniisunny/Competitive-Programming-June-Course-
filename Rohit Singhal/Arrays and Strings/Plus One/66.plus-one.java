/*
 * @lc app=leetcode id=66 lang=java
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
    public int[] plusOne(int[] digits) {
        if(digits[digits.length-1]<9)
     {
        digits[digits.length-1]++;
      
     }
     else
     {
         
         int i=digits.length-1;
         while(i>=0 && digits[i]==9)
         {
            digits[i]=0;
            i--;
         }
         if(i<0)
         {
             int temp[]=new int[digits.length+1];
             Arrays.fill(temp,0);
             temp[0]=1;
             return temp;
         }
         else
         {
             digits[i]+=1;
         }
     }
       return digits;
           
    }
}
// @lc code=end

