class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size(),res=0,cur=INT_MAX;
     for(int i=0;i<n;i++)
     {
         if(prices[i]<cur)
          cur=prices[i];
         else
         {
             res+=prices[i]-cur;
             cur=prices[i];
         }
     }
        return res;
    }
};
