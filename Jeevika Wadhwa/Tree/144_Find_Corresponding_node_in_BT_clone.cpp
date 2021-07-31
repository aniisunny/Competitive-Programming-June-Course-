class Solution {
public:
    TreeNode* ans;
    void inorder(TreeNode* o, TreeNode* c, TreeNode* target){
        if(o == NULL || c == NULL)return;
        inorder(o->left, c->left, target);
        if(o == target)
            ans = c;
        inorder(o->right, c->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(original, cloned, target);
        return ans;
    }
};
