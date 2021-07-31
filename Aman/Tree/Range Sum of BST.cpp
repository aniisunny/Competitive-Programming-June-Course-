class Solution {
public:
    int res=0;
    int rangeSumBST(TreeNode* root, int l, int h) {
        if(root==NULL)
            return 0;
        rangeSumBST(root->left, l, h);
        rangeSumBST(root->right, l, h);
        if(root->val>=l && root->val<=h)
          res+=root->val;
        return res;
    }
};
