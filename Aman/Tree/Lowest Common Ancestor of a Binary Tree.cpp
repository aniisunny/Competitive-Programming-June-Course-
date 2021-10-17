class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(root==NULL)
        return NULL;
      if(p==root || q==root)
        return root;
      TreeNode* t1=lowestCommonAncestor(root->left,p,q);
      TreeNode* t2=lowestCommonAncestor(root->right,p,q);
      if(t1 && t2)
       return root;
      if(t1)
        return t1;
      return t2;
    }
};
