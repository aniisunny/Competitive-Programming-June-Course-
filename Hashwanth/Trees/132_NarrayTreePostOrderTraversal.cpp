/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void poh(Node* root, vector<int>& res)
    {
        for(auto x:root->children)
        {
            if(x)
                poh(x,res);
        }
        if(root) res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(root)
        {
            poh(root,res);
        }
        return res;
    }
};
