class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int m1=cost[0],m2=cost[1],m,n=cost.size();
        for(int i=2;i<n;i++)
        {
            m=cost[i]+min(m1,m2);
            m1=m2;
            m2=m;
        }
        return min(m1,m2);
    }
};
