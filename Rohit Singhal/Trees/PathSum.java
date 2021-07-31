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
     public boolean hasPathSum(TreeNode root, int targetSum,int sum) {
         if(root==null)
             return false;
        if(root.left==null && root.right==null)
        {
          if(targetSum==sum+root.val)
              return true;
            else
                return false;
        }
        return hasPathSum(root.left,targetSum,sum+root.val) || hasPathSum(root.right,targetSum,sum+root.val);
        
        
    }
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return hasPathSum(root,targetSum,0);
        
    }
}
