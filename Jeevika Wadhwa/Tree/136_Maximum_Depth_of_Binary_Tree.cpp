 class Solution {
public:
    int maxDepth(TreeNode* root) {
        return root == NULL ? 0 : 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
