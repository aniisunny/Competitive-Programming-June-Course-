struct Node{
  Node *link[26]={NULL};
  bool fl=  false;
  int val=0;
    
};

class MapSum {
public:
    Node *root;
    unordered_map<string,int>ma;
    MapSum() {
        root=new Node();
    }
    
    void insert(string key, int val) {
        Node *node = root;
        
        if (ma.find(key) != ma.end()) {
            swap(val, ma[key]);
            val = ma[key] - val;
        }
        // updating seen for new values
        else ma[key] = val;
        // populating the trie
        for (auto c: key) {
            int curchar=c-'a';
            if (!node->link[curchar]) node->link[curchar] = new Node();
           
            node = node->link[curchar];
             node->val += val;
             
        }
    
        
        node->fl=true;
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
