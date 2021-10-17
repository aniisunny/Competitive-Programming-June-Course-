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
    //comp is O(n) as it is DFS(preorder)
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int res=preorder(root);
        return res;
    }
    int preorder(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+preorder(root->left)+preorder(root->right);
    }
};
