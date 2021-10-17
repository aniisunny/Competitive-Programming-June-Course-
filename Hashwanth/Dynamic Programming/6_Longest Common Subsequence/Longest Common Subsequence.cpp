class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
         int m=text1.length();
        int n=text2.length();
        int dp[m+1][n+1];
        //make 1st row col 0
        for(int i=0;i<m+1;i++)
            dp[i][0]=0;
        for(int j=0;j<n+1;j++)
            dp[0][j]=0;
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(text1[i-1]!=text2[j-1])
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                else
                    dp[i][j]=1+dp[i-1][j-1];
            }
        }
        return dp[m][n];
    }
};
