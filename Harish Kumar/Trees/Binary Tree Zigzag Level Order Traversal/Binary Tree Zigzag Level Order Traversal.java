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
    List<List<Integer>> ans = new ArrayList<>();
    public void dfs(TreeNode root, int level, List<List<Integer>> ans)
    {
        if(root == null)
        {
            return;
        }
        if(level == ans.size())
        {
            ans.add(new ArrayList<Integer>());
        }
        if(level % 2 == 0)
        {
            ans.get(level).add(root.val);
        }
        else
        {
            ans.get(level).add(0,root.val); 
        }
        dfs(root.left,level+1,ans);
        dfs(root.right,level+1,ans);
        
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        if(root == null)
        {
            return ans;
        }
        dfs(root,0,ans);
        return ans;
    }
}
