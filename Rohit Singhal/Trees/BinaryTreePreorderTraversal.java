/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
     List<Integer> ans=new ArrayList<>();
    public void helper(TreeNode root)
    {
        if(root==null)
            return;
        
        ans.add(root.val);
        helper(root.left);
        helper(root.right);
    }
    
    public List<Integer> preorderTraversal(TreeNode root) {
       helper(root);
        return ans;
        
        
    }
}
