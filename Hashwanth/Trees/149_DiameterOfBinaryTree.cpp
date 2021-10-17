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
    int length=0; 
    int helper(TreeNode* root) //will return max diameter correspongind to a node+1(1 is contributed by node(node's edge) it self)
    {
        if(!root) return 0;
        int left=helper(root->left);
        int right=helper(root->right);
        length=max(length,left+right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
            return length;
    }
};
