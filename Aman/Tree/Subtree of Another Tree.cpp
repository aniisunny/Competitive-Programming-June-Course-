class Solution {
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
          return true;
        if((p==NULL && q!=NULL) || (p!=NULL && q==NULL))
          return false;
        if(p->val!=q->val)
          return false;
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
       if(s==NULL && t==NULL)
        return true;
       if(s!=NULL && t==NULL)
        return true;
       if(s==NULL && t!=NULL)
        return false;
       if(isSameTree(s,t))
        return true;
       return (isSubtree( s->left, t)||isSubtree(s->right,t));
    }
};
