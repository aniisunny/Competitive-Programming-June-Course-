class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q || root==NULL){return root;}
        
       TreeNode *l= lowestCommonAncestor(root->left,p,q);
       TreeNode *r= lowestCommonAncestor(root->right,p,q);
        
       
      if(!l){return r;}
      else if(!r){return l;}  
      else{
          return root;
      }  
    }
};
