class Solution {
public:
    bool isMirror(TreeNode* a, TreeNode* b){
        if(a == NULL && b == NULL)return true;
        if(a == NULL || b == NULL)return false;
        return (a->val == b->val) && isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};
