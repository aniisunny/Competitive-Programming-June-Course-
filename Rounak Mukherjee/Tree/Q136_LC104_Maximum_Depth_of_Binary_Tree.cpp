class Solution {
public:
   int maxDepth(TreeNode *root)
{
   if(root==NULL){return 0;}
  queue<TreeNode*>q;
  q.push(root);
  int d=0;
  while(q.empty()==false){
      d++;
      int siz=q.size();
      for(int i=0;i<siz;i++){
        root=q.front();
        q.pop();
        if(root->left){
            q.push(root->left);
        }  
        if(root->right){
            q.push(root->right);
        }  
      }
  }
  return d;   
  
}
};

//Recursive
int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
