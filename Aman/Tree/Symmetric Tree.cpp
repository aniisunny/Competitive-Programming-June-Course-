class Solution {
public:
    bool check(TreeNode* l, TreeNode* r)
    {
        if(l==NULL && r==NULL)
            return true;
        if(l==NULL || r==NULL)
            return false;
        if(l->val!=r->val)
            return false;
        return check(l->left,r->right) && check(r->left,l->right);
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return check(root->left,root->right);
    }
};
