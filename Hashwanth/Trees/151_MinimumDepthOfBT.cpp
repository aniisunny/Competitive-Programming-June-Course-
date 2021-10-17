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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int minLeft=minDepth(root->left);
        int minRight=minDepth(root->right); 
        if(minLeft==0 || minRight==0) //handling case of left or right skewed
            return 1+max(minLeft,minRight);
        return 1+min(minLeft,minRight);
    }
};
