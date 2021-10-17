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
    
    public int depth(TreeNode root,boolean flag)
    {
        if(root==null)
            return 0;
        
        if(flag)
             return 1+depth(root.left,true);
        
        else 
             return 1+depth(root.right,false);
      
    }
    
    
    public int countNodes(TreeNode root) {
        
        if(root==null)
        {
            return 0;
        }
        int left=depth(root,true);
        int right=depth(root,false);
        if(left==right)
        {
            return (int)(Math.pow(2,left))-1;
        }
        else
        {
            return 1+countNodes(root.right)+countNodes(root.left);
        }
        
    }
}
