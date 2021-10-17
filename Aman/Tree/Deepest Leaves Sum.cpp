class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int res=0;
        queue<TreeNode*>q;
        if(root==NULL)
            return res;
        q.push(root);
        while(!q.empty())
        {
         int n=q.size();
         res=0;
         for(int i=0;i<n;i++)
         {
            TreeNode* temp=q.front();
            q.pop();
            res+=temp->val;
            if(temp->left)
             q.push(temp->left);
            if(temp->right)
             q.push(temp->right);
         } 
        } 
        return res;
    }
};
