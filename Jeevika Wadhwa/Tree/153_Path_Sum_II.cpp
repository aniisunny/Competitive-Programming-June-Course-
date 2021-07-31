class Solution {
public:
    vector<vector<int>>paths;
    vector<int>path;
    void helper(TreeNode* root, int target){
        if(root == NULL)return;
        
        path.push_back(root->val);
        
        if(root->val == target && root->left == NULL && root->right == NULL)
            paths.push_back(path);
        
        helper(root->left, target - root->val);
        helper(root->right, target - root->val);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        helper(root, targetSum);
        return paths;
    }
};
