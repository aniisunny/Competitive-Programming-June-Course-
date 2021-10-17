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
    
private:
    int helper(TreeNode* root , int& res)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int l = helper(root->left , res);
        int r = helper(root->right , res);
        
        int temp = 1 + max(l , r);
        int ans = max(temp , 1+l+r);
        res = max(res , ans);
        
        return temp;
    }
    
    
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        int res = 0;
        helper(root , res);
        return res-1;
    }
};