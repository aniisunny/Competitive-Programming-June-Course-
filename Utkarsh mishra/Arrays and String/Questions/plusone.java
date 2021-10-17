class Solution {
    public int[] plusOne(int[] digits) {
        int g=0;
        int n=digits.length;
        for (int i=n-1;i>=0;i--){
        if(digits[i]!=9)
        {digits[i]=digits[i]+1;
         g=1;
           break; 
        }
        
        else if(digits[i]==9)
        {  digits[i]=0;
         
        }}
        if((digits[0]==0) && (g==0)){
            int[] t=new int[n+1];
            t[0]=1;
            for(int i=1;i<t.length;i++){
            t[i]=digits[i-1];
            }
            return t;
        }
        
        
        
        return digits;
    }
}
