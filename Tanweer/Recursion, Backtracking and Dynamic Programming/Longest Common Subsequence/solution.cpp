class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int rows = text1.length(), cols = text2.length();
        int dp[rows+1][cols+1];        
        for(int i = 0 ; i<=rows ; i++)
        {
            for(int j = 0 ; j<=cols; j++)
            {   
                if(i == 0)
                {
                    dp[0][j] = 0;
                    continue;
                }
                if(j == 0)
                {
                    dp[i][0] = 0;
                    continue;
                }
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        
        return dp[rows][cols];
    }
};