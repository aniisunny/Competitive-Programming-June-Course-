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
    int total = 0;

    //     state:-
    //     -1 = i need a camera
    //     0= i have a camera
    //     1=  i am already covered

    public int dfs(TreeNode root) {
        if (root == null) {
            return 1;
        }

        int left = dfs(root.left);
        int right = dfs(root.right);
        if (left == -1 || right == -1) {
            total++;
            return 0;
        } else if (left == 0 || right == 0) {
            return 1;
        } else {
            return -1;
        }
    }

    public int minCameraCover(TreeNode root) {
        int rootState = dfs(root);
        if (rootState == -1) total++;

        return total;
    }
}
