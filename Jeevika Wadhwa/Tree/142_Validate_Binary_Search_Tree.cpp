class Solution {
public:
    vector<int>a;
    void inorder(TreeNode* root){
        if(root == NULL)return;
        inorder(root->left);
        a.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i = 0; i<a.size() - 1; i++)
            if(a[i] >= a[i+1])
                return false;
        return true;
    }
};
