/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //return camYes=0. camCovered=1. camNeeded=-1
    int numOfCam=0;
    int postorder(TreeNode* root)
    {
        if(root==NULL)
            return 1;
        int left=postorder(root->left);
        int right=postorder(root->right);
        if(left==-1 || right==-1)
           { numOfCam++;
             return 0;
           }
        else if(left==0 || right==0)
            return 1;
        else if(left==1 && right==1)  
            return -1;  
        return -1;    //just to avoid null return value error
    }
    int minCameraCover(TreeNode* root) {
        int state=postorder(root);
        if(state==-1)
            numOfCam++;
        return numOfCam;
    }
};
