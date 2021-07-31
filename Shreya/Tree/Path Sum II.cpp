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
    void findpath(TreeNode* root, int targetSum, vector<int>&curr, vector<vector<int>> &paths)
    {
        if (root==NULL)
        {
            return;
        }
        curr.push_back(root->val);
        if ((targetSum-root->val==0)&&(root->left==NULL)&&(root->right==NULL))
        {
            paths.push_back(curr);
            curr.pop_back();
            return;
        }
        findpath(root->left,targetSum-root->val,curr,paths);
        findpath(root->right,targetSum-root->val,curr,paths);
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>>paths;
       vector<int>curr;
       findpath(root,targetSum,curr,paths);
       return paths; 
    }
};