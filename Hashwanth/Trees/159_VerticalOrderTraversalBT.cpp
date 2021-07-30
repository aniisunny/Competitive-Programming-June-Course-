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
map<int,map<int,multiset<int>>> mp; //mp[i][j] set has elements of yAxis i and xAxis j; ---***Use multiset to handle duplicate values.***---------
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        dfs(root,0,0);
        for(auto y:mp)
        {
            vector<int> temp;
            for(auto x:y.second)
            {
                for(auto v:x.second)
                    temp.push_back(v);
            }
            res.push_back(temp);
        }
        return res;
    }
    void dfs(TreeNode* root, int y, int x)
    {
        if(!root) return;
        //insert in map
        mp[y][x].insert(root->val);
        dfs(root->left,y-1,x+1);
        dfs(root->right,y+1,x+1);
        
    }
};
