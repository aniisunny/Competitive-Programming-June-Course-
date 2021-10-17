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
    
      public TreeNode helper(int[] preorder, int[] inorder,int sp,int ep,int si,int ei)
      {
          if(sp>ep || si>ei)
          {
              return null;
          }
          
           TreeNode root=new TreeNode();
           root.val=preorder[sp];
           int i=si;
           int count=0;
           while(i<=ei && inorder[i]!=preorder[sp])
           {
               i++;
               count++;
           }
           root.left=helper(preorder,inorder,sp+1,sp+count,si,i-1);
           root.right=helper(preorder,inorder,sp+count+1,ep,i+1,ei);
          return root;

      }
    
    
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        return helper(preorder,inorder,0,preorder.length-1,0,inorder.length-1);
       
    }
}
