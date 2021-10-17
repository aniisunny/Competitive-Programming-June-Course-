class Solution {
    public int calculateMinimumHP(int[][] dungeon) {
        if(dungeon == null || dungeon.length == 0 || dungeon[0].length == 0)
        {
            return 0;
        }
        int dp[][] = new int[dungeon.length][dungeon[0].length];
        
        return helper(0,0, dungeon,dp);
        
    }
    private int helper(int sr, int sc, int dungeon[][], int dp[][])
    {
        if(sr >= dungeon.length || sc >= dungeon[0].length){
            return Integer.MAX_VALUE;
        }
        if(dp[sr][sc] != 0)
        {
            return dp[sr][sc];
        }
        int health = Math.min(helper(sr+1, sc, dungeon,dp), helper(sr, sc+1, dungeon,dp));
        
        if(health == Integer.MAX_VALUE)
        {
            health = 1;
        }
        
        int res =  0;          //Math.max(health - dungeon[sr][sc],1);
        if(health - dungeon[sr][sc] > 0)
        {
            res = health - dungeon[sr][sc];
            dp[sr][sc] = res;
        }
        else
        {
            res = 1;
            dp[sr][sc] = 1;
        }
            
        return res;
    }
}


