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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0; //if null node(root)
        //if node is less than low
        if(root->val<low) 
            return rangeSumBST(root->right,low,high);
        //if node is greater than high
        if(root->val>high) 
            return rangeSumBST(root->left,low,high);
        //if node in range
        return root->val+ rangeSumBST(root->right,low,high)+rangeSumBST(root->left,low,high);
    }
   
};
