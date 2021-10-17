class Solution {
public:
    long func(vector<int>& coins, int amount, vector<long>& vec)
    {
        if (amount<0)
        {
            return INT_MAX;
        }
        if (amount==0)
        {
            return 0;
        }
        if(vec[amount] != -1)
        {
            return vec[amount];
        }
        long minm = INT_MAX;
        
        for(int i=0; i<coins.size();i++)
        {
            long val = 1 + func(coins,amount-coins[i],vec);
            minm = min(minm,val);
        }
        vec[amount]=minm;
        return minm;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<long>vec(amount+1,-1);
        vec[0]=0;
        func(coins, amount, vec);
        return vec[amount]==INT_MAX?-1:vec[amount];
    }
    
};
