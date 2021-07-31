class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    vector<vector<int>>res;
       
    if(root==NULL)
        return res;
        
    queue<TreeNode*>q;
    vector<int>v;     
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
    reverse(res.begin(),res.end());
    return res;
    }
};
