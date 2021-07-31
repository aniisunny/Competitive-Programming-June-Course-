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
    int ans=Integer.MIN_VALUE;
    public int dfs(TreeNode root)
    {
        if(root==null)
            return 0;
            
        int lh=dfs(root.left);
        int rh=dfs(root.right);
        if(lh+rh>ans)
            ans=lh+rh;
        
        return 1+Math.max(lh,rh);
    }
    
    
    public int diameterOfBinaryTree(TreeNode root) {
        int depth=dfs(root);
        return ans;
        
    }
}
