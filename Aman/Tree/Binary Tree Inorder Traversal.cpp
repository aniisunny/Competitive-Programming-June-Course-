class Solution {
public:
    vector<int>res;
    
    void helpr(TreeNode* root)
    {
        if(root==NULL)
            return;
        helpr(root->left);
        res.push_back(root->val);
        helpr(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        helpr(root);
        return res;
    }
};
