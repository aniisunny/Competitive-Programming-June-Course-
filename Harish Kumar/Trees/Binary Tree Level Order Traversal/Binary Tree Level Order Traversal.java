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
    public List<List<Integer>> levelOrder(TreeNode root) {
        
        Queue<TreeNode> q = new LinkedList<>();
        
        if(root == null)
        {
            return ans;
        }
        
        q.offer(root);
        
        while(q.size() > 0)
        {
            int length = q.size();
            List<Integer> temp = new ArrayList<>();
            
            for(int i = 0; i < length; i++)
            {
                if(q.peek().left != null)
                {
                    q.offer(q.peek().left);
                }
                if(q.peek().right != null)
                {
                    q.offer(q.peek().right);
                }
                
                temp.add(q.poll().val);
            }
            ans.add(temp);
        }
        return ans;
    }
}
