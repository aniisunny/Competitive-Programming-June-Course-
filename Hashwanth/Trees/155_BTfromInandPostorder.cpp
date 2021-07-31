/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int index;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        index=inorder.size()-1;
        return helper(0,inorder.size()-1,postorder,inorder);
    }
     TreeNode* helper(int inSt,int inEnd,vector<int>& postorder, vector<int>& inorder)
    {
        if(index<0 || inSt>inEnd) return NULL; //base cond
        TreeNode* root=new TreeNode(postorder[index]); //inserting root node
        //find root node's index in inorder
        int inIndex;
         int data=postorder[index];
         index--;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==data)
            {
                inIndex=i;
                break;
            }
        }
        //now left and right of i in inorder are left and right subtrees respectively
        //assign those left and right subtrees to root's left , rigth with helper fun
        root->right=helper(inIndex+1,inEnd,postorder,inorder);
         root->left=helper(inSt,inIndex-1,postorder,inorder);
        return root;
        
    }
};
