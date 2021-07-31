class Solution {
public:
    int i;
    map<int,int>m;
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end){
        if(start > end)
            return NULL;
        ++i;
        TreeNode* root = new TreeNode(preorder[i]);
        int index = m[preorder[i]];
        root->left = helper(preorder, inorder, start, index -1);
        root->right = helper(preorder, inorder, index + 1, end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(i = 0; i < inorder.size(); i++)
            m[inorder[i]] = i;
        i = -1;
        return helper(preorder, inorder, 0, preorder.size() - 1);
    }
};
