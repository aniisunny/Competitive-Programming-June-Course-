class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL){return ans;}
        q.push(root);
        while(!q.empty()){
         vector<int>l;   
         int siz=q.size();
         for(int i=0;i<siz;i++){
             TreeNode *node=q.front();
             q.pop();
             if(node->left){
                 q.push(node->left);
             }
             if(node->right){
                 q.push(node->right);
             }
             l.push_back(node->val);
         } 
           ans.push_back(l); 
        }
        return ans;
    }
};
