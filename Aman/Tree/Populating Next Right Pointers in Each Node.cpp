class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
          return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* tp=q.front();
                q.pop();
                if(i!=n-1)
                 tp->next=q.front();
                if(tp->left)
                  q.push(tp->left);
                if(tp->right)
                  q.push(tp->right);
            }
        }
        return root;
    }
};
