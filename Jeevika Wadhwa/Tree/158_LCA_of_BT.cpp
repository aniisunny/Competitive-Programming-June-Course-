class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)return root;
        
        if(root->val == p->val || root->val == q->val)
            return root;
        
        TreeNode* llca = lowestCommonAncestor(root->left, p, q);
        TreeNode* rlca = lowestCommonAncestor(root->right, p, q);
        
        if(llca && rlca)
            return root;
        
        return llca ? llca : rlca;
    }
};
