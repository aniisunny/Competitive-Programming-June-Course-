class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a=cost[0];
        int b=cost[1];
        for (int i=2;i<cost.size();i++)
        {
            int c = min(a,b) + cost[i];
            a = b;
            b = c;
        }
        return min(a,b);
    }
};