class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if (root == NULL) return ret;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()) {
            int l = q.size();
            vector<int> curlayer;
            for (int i = 0; i < l; i++) {
                TreeNode *cur = q.front();
                q.pop();
                curlayer.push_back(cur->val);
                if (cur->left != NULL) q.push(cur->left);
                if (cur->right != NULL) q.push(cur->right);
            }
            ret.push_back(curlayer);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
