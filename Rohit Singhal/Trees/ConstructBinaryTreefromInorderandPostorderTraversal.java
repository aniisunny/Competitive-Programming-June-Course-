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
    
    public TreeNode helper(int[] in,int[] post,int si,int ei,int sp,int ep)
    {
        if(si>ei || sp>ep)
            return  null;
        
        int root=post[ep];
        TreeNode rootNode=new TreeNode(root);
        int temp=si;
        while(in[temp]!=root)
        {
            temp++;
        }
        int len=temp-si;
        rootNode.left=helper(in,post,si,temp-1,sp,sp+len-1);
        rootNode.right=helper(in,post,temp+1,ei,sp+len,ep-1);
        return rootNode;
    }
    
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        return helper(inorder,postorder,0,inorder.length-1,0,postorder.length-1);
        
        
    }
}
