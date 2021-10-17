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
    public List<List<Integer>> levelOrder(TreeNode root) {
         List<List<Integer>> ans=new ArrayList<>();
         if(root==null)
        {
            
            return ans;
        }
        List<Integer> temp=new ArrayList<>();
        Queue<TreeNode> pd=new LinkedList<>();
        pd.add(root);
        
        pd.add(null);
        while(!pd.isEmpty())
        {
            TreeNode top=pd.poll();
            
            if(top==null)
            {
                ans.add(temp);
                temp=new ArrayList<>();
                if(pd.isEmpty())
                    break;
                pd.add(null);
            }
            else
            {
                temp.add(top.val);
                if(top.left!=null)
                pd.add(top.left);
                if(top.right!=null)
                pd.add(top.right);
            }
            
        }
        return ans;
        
    }
}
