class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        if(cost.size()<=2)
            return min(cost[0],cost[1]);
        int first=cost[0];
        int second=cost[1];
        for(int i=2;i<cost.size();i++)
        {
            int current_step=cost[i]+min(first,second);
            first=second;
            second=current_step;
        }
        return min(first,second);
    }
};
