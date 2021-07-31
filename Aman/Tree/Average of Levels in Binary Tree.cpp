class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            double sum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left)
                  q.push(temp->left);
                if(temp->right)
                  q.push(temp->right);
            }
            sum=sum/n;
            res.push_back(sum);
        }
        return res;
    }
};
