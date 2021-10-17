class Solution 
{
public:
    
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
    unordered_set<int> seen(days.begin(),days.end());
    vector<int> dp(367,0);

    for(int i=1 ; i<366 ; i++)
    {
        dp[i] = dp[i-1];

        if(seen.find(i) != seen.end())
        {
            dp[i] = min({dp[i - 1] + costs[0], dp[max(0, i - 7)] + costs[1], dp[max(0, i - 30)] + costs[2]}); 
        }
    }

    return dp[365];

    }

};