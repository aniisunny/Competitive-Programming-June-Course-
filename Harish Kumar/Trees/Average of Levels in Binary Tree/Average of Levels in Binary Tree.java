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
    public List<Double> averageOfLevels(TreeNode root) {
        
        List<Double> ans = new ArrayList<>();
        
        Queue<TreeNode> mq = new LinkedList<>();
        
        mq.add(root);
        
        while(mq.size() > 0)
        {
            long sum = 0;
            int level = 0;
            
            Queue<TreeNode> temp = new LinkedList<>();
            while(!mq.isEmpty())
            {
                TreeNode n = mq.remove();
                sum += n.val;
                level++;
            
                if(n.left != null)
                {
                    temp.add(n.left);
                }
                if(n.right != null)
                {
                    temp.add(n.right);
                }
            }
            
            mq = temp;
            ans.add(sum * 1.0 / level);
        }
        return ans;
    }
}
