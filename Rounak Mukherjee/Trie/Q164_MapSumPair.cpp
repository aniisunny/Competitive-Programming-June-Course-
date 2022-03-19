struct Node{
  Node *link[26]={NULL};
  bool fl=  false;
  int val=0;
    
};

class MapSum {
public:
    Node *root;
    unordered_map<string,int>seen;
    MapSum() {
        root=new Node();
    }
    
    void insert(string key, int val) {
        Node *curr = root;
        
        if (seen.find(key) != end(seen)) {
            swap(val, seen[key]);
            val = seen[key] - val;
        }
        // updating seen for new values
        else seen[key] = val;
        // populating the trie
        for (char c: key) {
            c -= 'a';
            if (!curr->link[c]) curr->link[c] = new Node();
            curr = curr->link[c];
            curr->val += val;
        }
        curr->fl=true;
    }
    
    int sum(string prefix) {
        
        Node *node=root;
        for(int i=0;i<prefix.length();i++){
           int curchar=prefix[i]-'a';
            if(node->link[curchar]){
                node=node->link[curchar];
            }
            else{
                return 0;
            }
        }
        return node->val;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
