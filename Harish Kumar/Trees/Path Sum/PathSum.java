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
//     int ans = target
//     public int  preOrder(TreeNode root, int targetSum)
//     {
//         if(root == null && targetSum == 0)
//         {
//             return 0;
//         }
        
//         preOrder(root.left,targetSum - root.val);
//         preOrder(root.right, targetSum);
//     }
    public boolean hasPathSum(TreeNode root, int targetSum) {
        
        if(root == null)
        {
            return false;
        }
        
        if(root.left == null && root.right == null && targetSum - root.val == 0)
        {
            return true;
        }
        
        return hasPathSum(root.left, targetSum - root.val) || hasPathSum(root.right,targetSum - root.val);
    }
}
