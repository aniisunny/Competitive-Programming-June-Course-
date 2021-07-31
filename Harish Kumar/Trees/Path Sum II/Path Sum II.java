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
    public void helper(TreeNode root, int targetSum, List<List<Integer>> ans, List<Integer> temp)
    {
        if(root == null)
        {
            return;
        }
        
        temp.add(root.val);
        if(root.left == null && root.right == null)
        {
            if(root.val == targetSum)
            {
                ans.add(new ArrayList<Integer> (temp));
                return;
            }
        }
        
        if(root.left != null)
        {
            helper(root.left,targetSum - root.val,ans,temp);
            temp.remove(temp.size()-1);
        }
        
        if(root.right != null)
        {
            helper(root.right,targetSum - root.val,ans,temp);
            temp.remove(temp.size()-1);
        }
        
    }
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        
        if(root == null)
        {
            return ans;
        }
        
        helper(root, targetSum, ans, temp);
        return ans;
    }
}


