class Solution {
public:
    map<Node*, Node*>m;
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        if(m.find(node) == m.end()){
            Node* clone = new Node(node->val);
            m[node] = clone;
            for(Node* neighbor : node->neighbors)
                clone->neighbors.push_back(cloneGraph(neighbor));
        }
        return m[node];
    }
};
