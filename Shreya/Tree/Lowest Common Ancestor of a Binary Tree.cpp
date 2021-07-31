/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL)
        {
            return NULL;
        }
        if((root->val == p->val) || (root->val == q->val))
        {
            return root;
        }
        TreeNode* leftsearch = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightsearch = lowestCommonAncestor(root->right, p, q);
        if(leftsearch==NULL)
        {
            return rightsearch;
        }
        if(rightsearch==NULL)
        {
            return leftsearch;
        }
        return root;
    }
};