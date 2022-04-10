
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //base case as if node is NULL then return NULL
		if(!root)
            return NULL;
		
		//swapping left and right child
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        //calling recursion on left child
		invertTree(root->left);
		//calling recursion on right child
        invertTree(root->right);
        return root;
    }
};
