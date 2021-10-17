class Solution {
    public int minCostClimbingStairs(int[] cost) {
        
        int min1 = cost[0];
        int min2 = cost[1];
        
        int min = 0;
        
        for(int i = 2;i < cost.length;i++)
        {
            min = cost[i] + Math.min(min1 ,min2);
            
            min1 = min2;
            min2 = min;
        }
        return Math.min(min1,min2);
    }
}
