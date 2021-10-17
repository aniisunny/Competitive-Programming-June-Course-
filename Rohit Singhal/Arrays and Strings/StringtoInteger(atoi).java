
class Solution {
    public int myAtoi(String s) {
         if(s.length()==0)
         {
             return 0;
         }
        int index=0;
        int sign=1;
        int ans=0;
        while(index<s.length() && s.charAt(index)==' ')
        {
            index++;
        }
        if(index<s.length() &&  (s.charAt(index)=='+' || s.charAt(index)=='-')) 
        {
             if(s.charAt(index)=='-')
           {
            sign=-1;
            index++;
           }
            else
            {
            sign=1;
            index++;
            }
            
        }
       
        while(index<s.length())
        {
            int digit=s.charAt(index)-'0';
            if(digit<0 || digit>9)
                break;
            
            if(Integer.MAX_VALUE/10 < ans || (Integer.MAX_VALUE/10==ans && Integer.MAX_VALUE%10<digit))
            {
                if(sign==1)
                    return Integer.MAX_VALUE;
                else
                    return Integer.MIN_VALUE;
            }
            
            ans=10*ans+digit;
            index++;
        }
        return ans*sign;
        
        
    }
}
