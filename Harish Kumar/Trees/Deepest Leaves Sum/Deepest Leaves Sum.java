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
    int sum = 0;
    int maxDepth = 0;
    public void calculateSum(TreeNode root, int level)
    {
        if(root == null)
        {
            return;
        }
        if(level > maxDepth)
        {
            sum = 0;
            maxDepth = level;
        }
        
        if(level == maxDepth)
        {
            sum+= root.val;
        }
        calculateSum(root.left,level+1);
        calculateSum(root.right,level+1);
        
    }
    public int deepestLeavesSum(TreeNode root) {
        
        if(root == null)
        {
            return 0;
        }
        
        calculateSum(root,1);
        return sum;
        
    }
}
