class Solution {
public:
    int minCamera;
    int postorderTraversal(TreeNode* root){
        if(root == NULL)
            return 1;   
        int leftState = postorderTraversal(root->left);
        int rightState = postorderTraversal(root->right);
        
        if(leftState == -1 || rightState == -1){
            minCamera++;
            return 0;
        }
        else if(leftState == 0 || rightState == 0){
            return 1;
        }
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        minCamera = 0;
        int state = postorderTraversal(root);
        if(state == -1)
            minCamera++;
        return minCamera;
    }
};
