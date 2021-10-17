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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        index=0;
        return helper(0,inorder.size()-1,preorder,inorder);
    }
    TreeNode* helper(int inSt,int inEnd,vector<int>& preorder, vector<int>& inorder)
    {
        if(index>inorder.size()-1 || inSt>inEnd) return NULL; //base cond
        TreeNode* root=new TreeNode(preorder[index]); //inserting root node
        //find root node's index in inorder
        int inIndex;
         int data=preorder[index];
         index++;
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
       
         root->left=helper(inSt,inIndex-1,preorder,inorder);
         root->right=helper(inIndex+1,inEnd,preorder,inorder);
        return root;
    }
};
