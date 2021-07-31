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

    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        if (root == null) {
            List<List<Integer>> base = new ArrayList<>();
            return base;
        }
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        Queue<TreeNode> pd = new LinkedList<>();
        pd.add(root);
        pd.add(null);
        while (!pd.isEmpty()) {
            TreeNode top = pd.poll();

            if (top == null) {
                if (pd.isEmpty()) {
                    ans.add(temp);
                    break;
                } else {
                    ans.add(temp);
                    temp = new ArrayList<>();
                    pd.add(null);
                }
            } else {
                temp.add(top.val);
                if (top.left != null) pd.add(top.left);

                if (top.right != null) pd.add(top.right);
            }
        }
        Collections.reverse(ans);
        return ans;
    }
}
