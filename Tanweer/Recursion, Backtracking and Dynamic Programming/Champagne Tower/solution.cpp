class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        if (poured == 0)
        {
            return 0;
        }
        
        vector<double> dp(5050 , 0.0);
        dp[0] = poured;
        
        for(int row = 1 ; row<=query_row ; row++)
        {
            for (int col = row-1 ; col>=0 ; col--)
            {
                if(dp[col]>1)
                {
                    double val = (dp[col]-1)/2;
                    dp[col] = val;
                    dp[col+1] += val;
                }
                else
                {
                    dp[col] = 0;
                }
            }
        }
        
        if(dp[query_glass]>=1.0)
        {
            return 1.0;
        }
        else
        {
            return dp[query_glass];
        }
    }
};