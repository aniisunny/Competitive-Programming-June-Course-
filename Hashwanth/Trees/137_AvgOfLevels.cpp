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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> res;
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
                // res.push_back(temp);
            double s=0;
            for(auto x:temp) s+=x;
            res.push_back(s/temp.size());
        }
        return res;
    }
};
