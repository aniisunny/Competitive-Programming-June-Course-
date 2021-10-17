class Solution {
    public static int islandFind(int grid[][], int i, int j)
    {
        if(i < 0 || j < 0 || i >= grid.length || j >= grid[0].length || grid[i][j] == 0  )
        {
            return 0;
        }
        grid[i][j] = 0;
        
        return 1+(islandFind(grid, i-1, j) +  islandFind(grid, i, j+1) + islandFind(grid, i, j-1) + islandFind(grid, i+1, j)) ;
        
      
    }
    public int maxAreaOfIsland(int[][] grid) {
        
        // boolean vis[][] = new boolean[grid.length][grid[0].length];
        int maxArea = 0;
        
        for(int i = 0; i < grid.length;i++ )
        {
            for(int j = 0; j < grid[0].length;j++)
            {
                if(grid[i][j] == 1 )
                {
                   int max =  islandFind(grid,i,j);
                    maxArea = Math.max(max,maxArea);
                }
            }
        }
        return maxArea;
    }
}
