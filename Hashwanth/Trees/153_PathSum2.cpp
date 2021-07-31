/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> paths;
     vector<int> path; //current path
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        helper(root,targetSum);
        return paths;
    }
    void helper(TreeNode* root, int targetSum)
    {
        if(!root) return;
        path.push_back(root->val);
        if(!root->left && !root->right && targetSum==root->val)
        {
            paths.push_back(path);
            
        }
        helper(root->left,targetSum-root->val);
        helper(root->right,targetSum-root->val);
        path.pop_back();  //IMP
    }
};
