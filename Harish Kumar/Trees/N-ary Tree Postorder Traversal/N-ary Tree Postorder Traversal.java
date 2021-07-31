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
    List<Integer> ans = new ArrayList<>();

    public List<Integer> postorder(Node root) {
        if(root == null)
        {
            return ans;
        }
        
        for(Node r : root.children)
        {
            postorder(r);
        }
        ans.add(root.val);
        return ans;
    }
}


