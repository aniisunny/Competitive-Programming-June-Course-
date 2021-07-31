/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    
    public TreeNode dfs(TreeNode root,int val)
    {
        if(root==null)
            return null;
        if(root.val==val)
            return root;
        
        TreeNode left=dfs(root.left,val);
        TreeNode right=dfs(root.right,val);
        
        return (left==null) ? right : left;
    }
    
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        return dfs(cloned,target.val);
        
        
        
    }
}
