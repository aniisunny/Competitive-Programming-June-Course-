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
        
        if(level >= ans.size())
        {
            ans.add(0,new ArrayList<Integer>());
        }
        dfs(root.left,level+1,ans);
        dfs(root.right,level+1,ans);
        ans.get(ans.size()-level-1).add(root.val);

        
    }
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        
        if(root == null)
        {
            return ans;
        }
        
        dfs(root, 0,ans);
        return ans;
    
    }
}
