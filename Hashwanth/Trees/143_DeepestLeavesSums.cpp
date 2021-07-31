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
    int sum=0;
    int maxDepth=0;
    int deepestLeavesSum(TreeNode* root) {
        dsum(root,1); //root is at depth 1
        return sum;
    }
    void dsum(TreeNode* root, int currLevel)
    {  if(!root) return;
        if(currLevel>maxDepth) //it is not at max depth
        {
            sum=0;
            maxDepth=currLevel;
        }
       if(currLevel==maxDepth)
      {
          sum+=root->val;
      }
     dsum(root->left,currLevel+1); //going one level down
     dsum(root->right, currLevel+1);
    }
};
