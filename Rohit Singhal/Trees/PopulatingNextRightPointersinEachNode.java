/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public void connect(Node left, Node right) {
        
        if(left == null)
        {
            return;
        }
        left.next = right;

        
        connect(left.left, left.right);
        connect(right.left,right.right);
        connect(left.right,right.left);
        
        
    }
    public Node connect(Node root) {
        if(root==null)
            return null;
        
     connect(root.left,root.right);
        return root;
        
    }
}
