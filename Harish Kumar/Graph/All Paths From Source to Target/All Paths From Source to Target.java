class Solution {
    public void dfs(int sr,List<Integer> cur, int graph[][], int ds, List<List<Integer>> ans)
    {
        if(sr == ds)
        {
            ans.add(new ArrayList(cur));
            return;
        }
        
        for(int v : graph[sr])
        {
            cur.add(v);
            dfs(v,cur,graph,ds,ans);
            cur.remove(cur.size() - 1);
        }
        
    }
    
    
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        
        List<List<Integer>> ans = new ArrayList<>();
        
        List<Integer> cur = new ArrayList<>();
        
        cur.add(0);
        
        dfs(0,cur, graph, graph.length-1,ans);
        
        return ans;
          
    }
}
