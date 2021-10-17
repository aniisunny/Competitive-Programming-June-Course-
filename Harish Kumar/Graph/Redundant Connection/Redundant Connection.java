class Solution {
    int root[];
    public  int findNode(int node)
    {
        while(root[node] != node)
        {
            node  = root[node];
        }
        return node;
    }
    public void union(int i, int j)
    {
        int root1 = findNode(i);
        int root2 = findNode(j);
        
        if(root1 != root2)
        {
            root[root2] = root1;
        }
    }
    
    public int[] findRedundantConnection(int[][] edges) {
        
        root = new int[edges.length +1];
        
        for(int i = 0; i <= edges.length; i++ )
        {
            root[i] = i;
        }
        
        for(int[] edge : edges)
        {
            if(findNode(edge[0]) == findNode(edge[1]))
            {
                return edge;
            }
            else
            {
                union(edge[0],edge[1]);
            }
        }
        return null;
    }
}
