class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        
        int dp[][] = new int [text1.length()+1][text2.length()+1];
        
        for(int i = 1;i < dp.length;i++)
        {
            for(int j = 1; j < dp[0].length;j++)
            {
                char c1 = text1.charAt(i-1);
                char c2 = text2.charAt(j-1);
                
                if(c1 == c2)
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[dp.length -1][dp[0].length - 1];
             
 
    }
}
