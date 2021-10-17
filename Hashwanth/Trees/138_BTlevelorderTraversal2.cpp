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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> temp;
            while(size--)
            {
                TreeNode* t=q.front();
                
                
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                q.pop();
                temp.push_back(t->val);
            }
            res.push_back(temp);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
