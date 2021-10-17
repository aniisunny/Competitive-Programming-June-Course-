class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int min1 = 0;
        int min2 = 0;
        for (int i = 0; i<cost.size();i++)
        {
            int minm = min(min1,min2) + cost[i];
            min1=min2;
            min2=minm;
        }
        return min(min1,min2);
    }
};