class Solution {
public:
    void dfs(TreeNode* root, int &sum){
        if(root==NULL)return;
        dfs(root->right,sum);
        root->val+=sum;
        sum=root->val;
        dfs(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        dfs(root, sum);
        return root;
    }
};
