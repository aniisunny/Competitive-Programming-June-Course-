class Solution {
public:
    vector<int>res;
    
    void helpr(TreeNode* root)
    {
        if(root==NULL)
            return;
        helpr(root->left);
        helpr(root->right);
        res.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        helpr(root);
        return res;
    }
};
