class Solution {
public:
    TreeNode* res;
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* cl, TreeNode* tar) {
        if(org==NULL)
            return cl;
        if(org==tar)
        {
            res=cl;
            return res;
        }
        getTargetCopy(org->left, cl->left, tar);
        getTargetCopy(org->right, cl->right, tar);
        return res;
    }
};
