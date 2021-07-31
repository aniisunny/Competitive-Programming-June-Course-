class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)return 0;
        
        int ld = minDepth(root->left);
        int rd = minDepth(root->right);
        
        return 1 + (min(ld, rd) ? min(ld, rd) : max(ld, rd));
    }
};
