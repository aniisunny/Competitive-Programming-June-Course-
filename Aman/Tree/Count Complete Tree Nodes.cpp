class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int l=countNodes(root->left);
        int r=countNodes(root->right);
        return l+r+1;
    }
};
