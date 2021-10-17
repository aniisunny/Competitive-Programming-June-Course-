class Solution {
    public int numDecodings(String s) {
        if(s.length() == 1 && s.charAt(0) == '0')
        {
            return 0;
        }
        
        int dp[] = new int[s.length()];
        
        if(s.charAt(0) != '0')
        {
            dp[0] = 1;
        }
        
        
        for(int i = 1; i < dp.length;i++)
        {
            if(s.charAt(i-1) == '0' && s.charAt(i) == '0')
            {
                dp[i]  = 0;
            }
            else if(s.charAt(i-1) == '0' && s.charAt(i) != '0')
            {
                dp[i] = dp[i -1];
            }
            else if(s.charAt(i-1) != '0' && s.charAt(i) == '0')
            {
                if(s.charAt(i-1) == '1' || s.charAt(i-1) == '2')
                {
                    dp[i] = (i >= 2 ? dp[i-2] : 1); 
                }
                else
                {
                    dp[i] = 0;
                }
            }
            else
            {
                if(Integer.parseInt(s.substring(i-1, i+1)) <= 26)
                {
                    dp[i] = dp[i-1] + (i >= 2 ? dp[i-2] : 1);
                }
                else
                {
                    dp[i] = dp[i-1];
                }
            }
        }
        
        return dp[s.length() -1];
    }
}
