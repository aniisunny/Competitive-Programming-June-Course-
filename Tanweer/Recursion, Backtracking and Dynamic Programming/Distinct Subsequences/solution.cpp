class Solution {
public:
    int numDistinct(string s, string t) 
    {
        vector<vector<unsigned int>> dp(s.length()+1,vector<unsigned int>(t.length()+1,0));
        
        for(int i = 0 ; i<dp.size() ; i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i = 1 ; i<dp.size() ; i++)
        {
            for(int j = 1 ; j<dp[0].size() ; j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[dp.size()-1][dp[0].size()-1];
    }
};