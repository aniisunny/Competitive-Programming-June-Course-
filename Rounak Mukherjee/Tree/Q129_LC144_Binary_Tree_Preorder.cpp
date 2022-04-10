class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>pre;
       if(!root){return pre;}
       stack<TreeNode*>s;
        
       s.push(root);
       while(!s.empty()){
           TreeNode* n=s.top();
           s.pop();
           pre.push_back(n->val);
           if(n->right){
               s.push(n->right);
           }
           if(n->left){
               s.push(n->left);
           }
           
       } 
        return pre;
    }
};
