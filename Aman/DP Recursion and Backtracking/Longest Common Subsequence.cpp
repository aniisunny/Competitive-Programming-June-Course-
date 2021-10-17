class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
       int n=t1.size(), m=t2.size();
        int dp[n+1][m+1];
       for(int i=0;i<=n;i++)
       {
           for(int j=0;j<=m;j++)
           {
               if(i==0 || j==0)
                 dp[i][j]=0;
               else if(t1[i-1]==t2[j-1])
                 dp[i][j]=dp[i-1][j-1]+1; 
               else
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);  
           }
       }
       return dp[n][m];
    }
};
