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
        List<Double> ans=new ArrayList<Double>();
        Queue<TreeNode> q=new LinkedList<>();
        q.add(root);
        q.add(null);
       
        while(!q.isEmpty())
        {
            double sum=0;
            double count=0;
            while(q.peek()!=null)
            {
                 TreeNode top=q.poll();
                 sum+=top.val;
                  count++;
                 if(top.left!=null)
                 q.add(top.left);
                if(top.right!=null)
                 q.add(top.right);
            }
            ans.add(sum/count);
            q.poll();
            if(q.isEmpty())
                break;
            q.add(null);
            
        }
        return ans;
        
    }
}
