class Solution{
    
    static int minimumNumberOfDeletions(String S)
    {
         int len=S.length();
        
        int[][] dp=new int[len+1][len+1];
        for(int i=1;i<=len;i++)
        {
            for(int j=1;j<=len;j++)
            {
                
                if(S.charAt(i-1)==S.charAt((len-1)-(j-1)))
                {
                    dp[i][j]=1+dp[i-1][j-1];
                
                }
                else
                {
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return len-dp[len][len];
        //your code here
    }
}
