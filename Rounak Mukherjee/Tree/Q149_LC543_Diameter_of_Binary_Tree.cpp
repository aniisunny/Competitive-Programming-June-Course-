class Solution {
public:
    int check(TreeNode* node,int &maxi){
        if(node==NULL){return 0;}
        
        int lh= check(node->left,maxi);
        int rh=check(node->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
     int maxi=0;
     check(root,maxi);  
     return maxi;   
    }
};
