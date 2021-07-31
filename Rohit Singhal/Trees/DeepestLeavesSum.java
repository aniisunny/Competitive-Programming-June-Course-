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

    
    public int deepestLeavesSum(TreeNode root) {
        
        Queue<TreeNode> q=new LinkedList<>();
        q.add(root);
        int sum=0;
        while(!q.isEmpty())
        {
            sum=0;
            for(int i=q.size()-1;i>=0;i--)
            {
                TreeNode top=q.poll();
                sum+=top.val;
                if(top.left!=null)
                    q.add(top.left);
                
                 if(top.right!=null)
                    q.add(top.right);
            }
        }
        return sum;
        
    }
}
