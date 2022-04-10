class Solution {
public:
    // start and end variables indicate the start of the inorder index and the end of the inorder index respectively. 
   TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> inMap; 

        for(int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }

        TreeNode* root = buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inMap);
        return root;
    }
    
    
   TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int, int> &inMap) {
      if(preStart>preEnd || inStart>inEnd){
          return NULL;
      }
       TreeNode* root=new TreeNode(preorder[preStart]);
       int rootp= inMap[root->val];
       int numl=rootp-inStart;
       
       root->left=buildTree(preorder,preStart+1,preStart+numl,inorder, inStart,rootp-1,inMap);
           
       root->right=buildTree(preorder,preStart+numl+1,preEnd,inorder,rootp+1,inEnd,inMap);
           
       return root;    
    }
};
