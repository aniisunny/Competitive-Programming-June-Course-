class Solution {
public:
    string removeKdigits(string num, int k) {
    string ans="";                                         
    for (int i=0;k>0 && i<num.size()-1;) 
    {
       if (num[i]>num[i+1]) 
       {
          num.erase(i,1);
          k--;         
          if (i>0) 
           i--; 
       }
       else
         i++;
   }

   if(k>0) 
       num.erase(num.size()-k,k);
        
   while (num.size()>0 && num[0]=='0')
      num.erase(0, 1);

   return num.size()>0?num:"0";
       
    }
};
