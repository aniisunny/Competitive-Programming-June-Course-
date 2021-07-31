class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root == NULL)return false;
        if(issame(root, subroot))return true;
        return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
    }
    bool issame(TreeNode* root, TreeNode* subroot){
        if(root == NULL && subroot == NULL)return true;
        if(root == NULL || subroot == NULL)return false;
        if(root->val != subroot->val)return false;
        return issame(root->left, subroot->left) && issame(root->right, subroot->right);
    }
};
