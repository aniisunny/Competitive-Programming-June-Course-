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
    public List<Integer> helper(TreeNode root, List<Integer> ans)
    {
        if(root == null)
        {
            return null;
        }
        
        helper(root.left, ans);
        helper(root.right, ans);
         ans.add(root.val);
        
        return ans;
        
    }
    public List<Integer> postorderTraversal(TreeNode root) {
        
        List<Integer> ans = new ArrayList<>();
        
        if(root == null)
        {
            return ans;
        }
        
        return ans = helper(root, ans);
        
    }
}
