class Solution {
public:
    int numDistinct(string s, string t) {
        
        int n=s.length(),m=t.length();
        vector<vector<unsigned long long>> dp(n+1,vector<unsigned long long>(m+1,0));
        
        for(int i=0;i<=n;i++)
         dp[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                  dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                else
                  dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};
