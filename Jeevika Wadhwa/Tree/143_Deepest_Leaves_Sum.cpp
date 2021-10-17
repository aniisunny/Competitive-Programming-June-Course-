class Solution {
public:
    int maxdepth(TreeNode* root){
        if(root == NULL)return 0;
        return 1 + max(maxdepth(root->left), maxdepth(root->right));
    }
    int findsum(TreeNode* root, int depth){
        if(root == NULL)return 0;
        if(depth == 1)return root->val;
        return findsum(root->left, depth - 1) + findsum(root->right, depth - 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxdepth(root);
        return findsum(root, depth);
    }
};
