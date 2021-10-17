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
    List<List<Integer>> ans=new ArrayList<>();
    
    public void dfs(Node root,int level)
    {
        if(level>ans.size())
        {
            ans.add(new ArrayList<>());
        }
        ans.get(level-1).add(root.val);
        for(int i=0;i<root.children.size();i++)
        {
            dfs(root.children.get(i),level+1);
        }
        
    }
    
    public List<List<Integer>> levelOrder(Node root) {
        if(root==null)
            return ans;
        
        
          dfs(root,1);
        return ans;
    }
}
