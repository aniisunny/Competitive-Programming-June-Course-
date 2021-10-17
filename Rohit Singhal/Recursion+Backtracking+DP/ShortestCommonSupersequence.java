class Solution {
    public String shortestCommonSupersequence(String str1, String str2) {
        int n=str1.length();
        int m=str2.length();
        int[][] dp=new int[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                
                if(str1.charAt(i-1)==str2.charAt(j-1))
                {
                    dp[i][j]=1+dp[i-1][j-1];
                
                }
                else
                {
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        String scs="";
        int i=n;
        int j=m;
        while(i>0 && j>0)
        {
            if(str1.charAt(i-1)==str2.charAt(j-1))
            {
                scs=str1.charAt(i-1)+scs;
                i--;
                j--;
            }
            else
            {
                if(dp[i][j-1]>dp[i-1][j])
                {
                    scs=str2.charAt(j-1)+scs;
                    j--;
                }
                else
                {
                    scs=str1.charAt(i-1)+scs;
                    i--;
                }
            }
        }
        while(i>0)
        {
           scs=str1.charAt(i-1)+scs;
            i--; 
        }
         while(j>0)
        {
           scs=str2.charAt(j-1)+scs;
            j--; 
        }
        
        return scs;
    }
}
