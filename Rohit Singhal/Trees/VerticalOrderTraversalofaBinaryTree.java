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
    TreeMap<Integer, TreeMap<Integer, ArrayList<Integer>>> map = new TreeMap<>();

    public void dfs(TreeNode root, int row, int col) {
        if (root == null) return;

        if (map.containsKey(col)) {
            if (map.get(col).containsKey(row)) {
                map.get(col).get(row).add(root.val);
                Collections.sort(map.get(col).get(row));
            } else {
                map.get(col).put(row, new ArrayList<>());
                map.get(col).get(row).add(root.val);
            }
        } else {
            map.put(col, new TreeMap<>());
            map.get(col).put(row, new ArrayList<>());
            map.get(col).get(row).add(root.val);
        }
        dfs(root.left, row + 1, col - 1);
        dfs(root.right, row + 1, col + 1);
    }

    public List<List<Integer>> verticalTraversal(TreeNode root) {
        dfs(root, 0, 0);
        List<List<Integer>> ans = new ArrayList<>();

        for (Map.Entry<Integer, TreeMap<Integer, ArrayList<Integer>>> entry : map.entrySet()) {
            ArrayList<Integer> temp = new ArrayList<>();

            for (Map.Entry<Integer, ArrayList<Integer>> entry2 : entry.getValue().entrySet()) {
                ArrayList<Integer> temp2 = entry2.getValue();
                for (Integer i : temp2) {
                    temp.add(i);
                }
            }

            ans.add(temp);
        }

        return ans;
    }
}
