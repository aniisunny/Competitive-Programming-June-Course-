class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dng) {
      int n=dng.size(),m=dng[0].size();
      int dp[n][m];
      for(int i=n-1;i>=0;i--)
      {
          for(int j=m-1;j>=0;j--)
          {
              if(i==n-1 && j==m-1)
                dp[i][j]=min(0,dng[i][j]);
              else if(i==n-1)
                dp[i][j]=min(0,dng[i][j]+dp[i][j+1]);
              else if(j==m-1)
                dp[i][j]=min(0,dng[i][j]+dp[i+1][j]);
              else
                dp[i][j]=min(0,max(dp[i][j+1],dp[i+1][j])+dng[i][j]);
          }
      }
      return abs(dp[0][0])+1;
    }
};
