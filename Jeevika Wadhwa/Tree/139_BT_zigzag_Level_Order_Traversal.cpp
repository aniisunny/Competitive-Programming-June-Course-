class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>level;
            while(n--){
                TreeNode* curr = q.front();q.pop();
                level.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(level);
        }
        for(int i = 0; i<ans.size(); i++)
            if(i%2)
                reverse(begin(ans[i]), end(ans[i]));
        return ans;
    }
};
