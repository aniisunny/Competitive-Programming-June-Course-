/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    List<List<Integer>> ans = new ArrayList<>();
    
    public void dfs(Node root, int level, List<List<Integer>> ans)
    {
        if(root == null)
        {
            return;
        }
        
        if(level == ans.size())
        {
            ans.add(new ArrayList<Integer>());
        }
        ans.get(level).add(root.val);
        
        for(Node r : root.children)
        {
            dfs(r,level+1,ans);
        }
    }
    
    public List<List<Integer>> levelOrder(Node root) {
        
        if (root == null)
        {
            return ans;
        }
        dfs(root,0,ans);
        return ans;
        
    }
}
