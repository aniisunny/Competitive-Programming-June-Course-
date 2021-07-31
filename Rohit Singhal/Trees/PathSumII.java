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
    List<List<Integer>> ans=new ArrayList<>();
    List<Integer> temp=new ArrayList<>();
    
    public void dfs(TreeNode root, int targetSum)
    {
        if(root==null)
            return;
        
         if(root.left==null && root.right==null)
        {
            if(targetSum==root.val)
            {
                temp.add(root.val);
                ans.add(new ArrayList<>(temp));
                temp.remove(temp.size()-1);
                return;
            }
             else
             {
                 return;
             }
        }
        temp.add(root.val);
        dfs(root.left,targetSum-root.val);
        dfs(root.right,targetSum-root.val);
        temp.remove(temp.size()-1);
        return;
        
    }

    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        dfs(root,targetSum);
        return ans;
       
    }
}
