 class Solution {
    public int maxVowels(String s, int k) {
    int count=0;
       
       for(int i=0;i<k;i++)
        { 

            
             char y=s.charAt(i);
             
        if (y == 'a' || y == 'e' || y == 'i' || y == 'o'
            || y == 'u')
            count++;
            }
        int l=0,r=k-1;
    int max=count;
        while(r<s.length()-1){
            char y=s.charAt(l);
            if (y == 'a' || y == 'e' || y == 'i' || y == 'o'
            || y == 'u')
            count--;
            r++;
            l++;
            char y1=s.charAt(r);
            if (y1 == 'a' || y1 == 'e' || y1 == 'i' || y1 == 'o'
            || y1 == 'u')
            {   count++;
         }
            
         max=Math.max(max,count);
                
            
        
        
            
        }
        return max;
        
    }
}
