class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);
        
        return max(lh + rh, max(ld, rd));
    }
};
