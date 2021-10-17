class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<int> ways(amount+1,0);
        ways[0] = 1;
        for (int i = 0 ; i <coins.size() ; i++)
        {
            for(int j = coins[i] ; j<=amount ; j++)
            {
                if(coins[i] <= amount)
                {
                    ways[j]+=ways[j-coins[i]];
                }
            }
        }
        return ways[amount];
    }
};