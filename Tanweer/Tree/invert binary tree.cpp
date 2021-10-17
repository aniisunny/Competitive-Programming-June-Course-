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

        
private:
    TreeNode* helper(TreeNode* root)
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        helper(root->left);
        helper(root->right);
        
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        return root;
        
    }
    
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if (root == NULL)
        {
            return NULL;
        }
        return helper(root);
    }
};