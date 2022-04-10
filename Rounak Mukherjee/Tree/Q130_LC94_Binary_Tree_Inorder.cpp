class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        
        if(!root){return ans;}
        TreeNode *node=root;
        while(true){
            if(node){
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()){break;}
                node=s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};
