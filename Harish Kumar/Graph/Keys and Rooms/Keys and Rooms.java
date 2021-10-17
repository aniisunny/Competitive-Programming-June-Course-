class Solution {
    public static void dfs(int node, List<List<Integer>> rooms, boolean vis[])
    {
        vis[node] = true;
        for(int j : rooms.get(node))
        {
            if(!vis[j])
            {
                vis[j] = true;
                dfs(j,rooms, vis);
            }
        }  
    }
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        
        boolean vis[] = new boolean[rooms.size()];
        
        dfs(0,rooms,vis);
        
        for(boolean v : vis)
        {
            if(!v)
            {
                return false;
            }
            
        }
        
        return true;
    }
}
