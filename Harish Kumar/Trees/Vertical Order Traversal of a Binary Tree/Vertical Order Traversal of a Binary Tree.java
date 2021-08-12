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
    
    private void preorderTraversal (TreeNode root, int level, int verticalLine, TreeMap<Integer, TreeMap<Integer, List<Integer>>> verticalMap) {
        
        if (root != null) {
            TreeMap<Integer, List<Integer>> levelMap = verticalMap.getOrDefault (verticalLine, new TreeMap <>());
            List<Integer> list = levelMap.getOrDefault (level, new ArrayList <>());
            list.add (root.val);
            levelMap.put (level, list);
            verticalMap.put (verticalLine, levelMap);
            
            preorderTraversal (root.left, level + 1, verticalLine - 1, verticalMap);
            preorderTraversal (root.right, level + 1, verticalLine + 1, verticalMap);
        }
    }
    
    public List<List<Integer>> verticalTraversal(TreeNode root) {
        
        if (root == null) {
            return new ArrayList <>();
        }
        
        List<List<Integer>> ans = new ArrayList <>();
        TreeMap<Integer, TreeMap<Integer, List<Integer>>> verticalMap = new TreeMap <>();
        
        preorderTraversal (root, 0, 0, verticalMap);
        
        for (TreeMap<Integer, List<Integer>> levelMap : verticalMap.values ()) {
            List<Integer> list = new ArrayList <>();
            
            for (List<Integer> temp : levelMap.values ()) {
                Collections.sort (temp);
                list.addAll (temp);
            }
            
            ans.add (list);
        }
        
        return ans;
    }
}
