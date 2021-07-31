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
class Solution 
{
public:
    int helper(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int left = helper(root->left);
        int right = helper(root->right);
        
        if(left == 0 && right == 0)
        {
            return 1;
        }
        else if(left == 0)
        {
            return 1 + right;
        }
        else if(right == 0)
        {
            return 1 + left;
        }
        return 1 + min(left,right);
    }
    int minDepth(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        return helper(root);
    }
};