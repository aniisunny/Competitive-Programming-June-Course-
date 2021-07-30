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
    
    public boolean dfs(TreeNode root,long max, long min)
    {
        if(root==null)
            return true;
        
//         if(root.left!=null && (root.left.val>=root.val) || (root.left.val>=max))
//             return false;
        
//         if(root.right!=null && (root.right.val<=root.val) ||  (root.right.val<=min) ) 
//             return false;
        if(root.val<=min || root.val>=max)
            return false;
            
        
        return dfs(root.left,root.val,min) && dfs(root.right,max,root.val);
        
        
    }
    
    
    public boolean isValidBST(TreeNode root) {
        if(root==null)
            return true;
        
        
        
        return dfs(root,Long.MAX_VALUE,Long.MIN_VALUE);
        
    }
}
