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
    TreeNode* invertTree(TreeNode* root) {
        preorder(root);
        return root;
    }
    void preorder(TreeNode* root)
    {
        if(!root || (!root->left && !root->right)) return;
        //swap
        if(root->left && root->right)
        {
            swap(root->left,root->right);
        }
        else if(root->left && !root->right)
        {
            root->right=root->left;
            root->left=NULL;
        }
         else if(!root->left && root->right)
        {
            root->left=root->right;
            root->right=NULL;
        }
        preorder(root->left);
        preorder(root->right);
    }
};
