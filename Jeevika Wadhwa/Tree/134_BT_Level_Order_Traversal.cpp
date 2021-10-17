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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;     // return this
        if(root == NULL)return ans;     // if tree is empty
        queue<TreeNode*>q;  // queue to store nodes
        q.push(root);   
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;    // vector for each level
            while(n--){
                TreeNode* curr = q.front();q.pop(); 
                temp.push_back(curr->val);  // pushing the nodes val into their level vector
                if(curr->left)
                    q.push(curr->left); // add left child to tree
                if(curr->right)
                    q.push(curr->right);    // add right child to tree
            }
            ans.push_back(temp);    // finally pushing each level into the ans
        }
        return ans;
    }
};
