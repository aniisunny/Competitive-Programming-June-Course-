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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vec;
        if(root==NULL)
        {
            return vec;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int n = q.size();
            while(n--)
            {
                TreeNode* node=q.front(); 
                q.pop();
                v.push_back(node->val);
                if (node->left!=NULL)
                {
                    q.push(node->left);
                }
                if (node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
            vec.push_back(v);
            
        }
       return vec; 
    }
};