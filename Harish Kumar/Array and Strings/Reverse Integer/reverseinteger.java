class Solution {
    public int reverse(int x) {
        
        long rev  = 0;
       while(x != 0)
       {
           int digit = x % 10;
           x = x /10;
           rev = rev*10 +  digit;
       }
        if( rev > Integer.MAX_VALUE - 1 || rev < Integer.MIN_VALUE)
        {
            return 0;
        }
        else
        {
            return (int)rev;
        }
        
    }
}
