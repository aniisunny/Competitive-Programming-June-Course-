class Solution {
public:
   
    vector<vector<int>> levelOrder(TreeNode* root) {
    
    queue<TreeNode*>q;
    vector<vector<int>>res;
    vector<int>v;    
        
    if(root==NULL)
        return res;
        
    q.push(root);
        
    while(!q.empty())
    {
       int n=q.size();
       for(int i=0;i<n;i++)
       {
           TreeNode* temp=q.front();
           q.pop();
           v.push_back(temp->val);
           if(temp->left)
             q.push(temp->left);
           if(temp->right)
             q.push(temp->right);
       }
       res.push_back(v);  
       v.resize(0);
    }
    return res;
    }
};
