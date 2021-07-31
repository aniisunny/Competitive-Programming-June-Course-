class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int h=0;
       return diameter(root,h);
    }
    int diameter(TreeNode* root, int& h)
    {
        if(root==NULL)
        {
            h=0;
            return 0;
        }
        int h1=0,h2=0;
        int d1=diameter(root->left,h1);
        int d2=diameter(root->right,h2);
        h=max(h1,h2)+1;
        return max({d1,d2,h1+h2});
    }
};
