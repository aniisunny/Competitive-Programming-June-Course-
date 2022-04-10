//DFS version:

class Solution {
public:
    void dfs(TreeNode* root, int layer, vector<vector<int>> &tmp) {
        if (tmp.size() < layer + 1) tmp.push_back({});
        tmp[layer].push_back(root->val);
        if (root->left) dfs(root->left, layer + 1, tmp);
        if (root->right) dfs(root->right, layer + 1, tmp);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> tmp(1);
        dfs(root, 0, tmp);
        vector<double> res(tmp.size());
        transform(begin(tmp), end(tmp), begin(res), [](auto v){return accumulate(begin(v), end(v), 0.0) / v.size();});
        return res;
    }
};

//BFS version:

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;
        vector<int> tmp;
        int len, i;
        TreeNode *curr;
        while (q.size()) {
            tmp.clear();
            len = q.size();
            for (i = 0; i < len; i++) {
                curr = q.front();
                tmp.push_back(curr->val);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
                q.pop();
            }
            res.push_back(accumulate(begin(tmp), end(tmp), 0.0) / tmp.size());
        }
        return res;
    }
};
