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
    public boolean checkTree(TreeNode leftSubTree, TreeNode rightSubTree)
    {
        if(leftSubTree == null && rightSubTree == null)
        {
            return true;
        }
        else if( leftSubTree != null && rightSubTree != null)
        {
            if(leftSubTree.val == rightSubTree.val)
            {
                return checkTree(leftSubTree.left, rightSubTree.right) && checkTree(rightSubTree.left, leftSubTree.right);
            }
        }
        return false;
    }
    public boolean isSymmetric(TreeNode root) {
        if(root == null)
        {
            return true;
        }
        
        return checkTree(root.left, root.right);
        
        
    }
}
