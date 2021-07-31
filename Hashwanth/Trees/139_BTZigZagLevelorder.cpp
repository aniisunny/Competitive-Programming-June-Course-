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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> res;
        int b=0;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int size=q.size();
            while(size!=0)
            {
            TreeNode* t=q.front();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            temp.push_back(t->val);
             q.pop();
                size--;
            }
               if(b)
               {   b=0;
                   reverse(temp.begin(),temp.end());
                   res.push_back(temp);
               }
                else
                    {res.push_back(temp);
                     b=1;
                    }
        }
        return res;
    }
};
