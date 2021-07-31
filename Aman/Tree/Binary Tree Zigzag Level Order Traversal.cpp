class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q; 
        vector<vector<int>> res;
        int fl=0;
        vector<int>v;
        if(root==NULL)
         return res;
        q.push(root);
        
        while (!q.empty())
        {
            int s = q.size();
            for (int i=0;i<s;++i) 
            {
               TreeNode *tmp = q.front();
               q.pop();
               v.push_back(tmp->val);
               if (tmp->left) 
                q.push(tmp->left); 
               if (tmp->right)
                q.push(tmp->right);
            }
            if(fl)
             reverse(v.begin(),v.end());
            res.push_back(v); 
            v.resize(0); 
            fl=!fl;
      }
      return res;
    }
};
