class Solution {
public:
    int i;
    map<int,int>m;
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int start, int end){
        if(start > end)
            return NULL;
        --i;
        TreeNode* root = new TreeNode(postorder[i]);
        int index = m[postorder[i]];
        root->right = helper(inorder, postorder, index + 1, end);
        root->left = helper(inorder, postorder, start, index - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(i = 0; i<inorder.size(); i++)
            m[inorder[i]] = i;
        return helper(inorder, postorder, 0, postorder.size() - 1);
    }
};
