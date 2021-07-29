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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        else if(isSame(root,subRoot))
            return true;
        else 
            return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot); //IMP use isSubtree not isSame
    }
    bool isSame(TreeNode* root, TreeNode* subRoot)
    {
        if(!root || !subRoot) //if either or both are null
            return root==NULL && subRoot==NULL; //if both are null
         //if node val is same go for left and right parts of both saperately
        if(root->val==subRoot->val)
 return isSame(root->left,subRoot->left) && isSame(root->right,subRoot->right); 
         
 return false; //if node vals are not equal then there not equal(it is clear)
        
    }
};
