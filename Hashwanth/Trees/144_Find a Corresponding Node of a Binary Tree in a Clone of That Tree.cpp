/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<TreeNode*> o; //original 0
    vector<TreeNode*> c; //clone 1
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(original,0);
        inorder(cloned,1);
        for(int i=0;i<o.size();i++)
        {
            if(o[i]==target) return c[i];
        }
        return target;
    }
    void inorder(TreeNode* root, int oc)
    {
        if(root==NULL)
            return;
        inorder(root->left,oc);
        if(oc) c.push_back(root);
        else o.push_back(root);
        inorder(root->right,oc);
    }
};
