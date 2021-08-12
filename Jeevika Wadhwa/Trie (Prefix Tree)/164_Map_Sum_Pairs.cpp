class MapSum {
public:
    /** Initialize your data structure here. */
    class TrieNode{
    public:
        TrieNode *child[26];
        int value;
    }*root;
    MapSum() {
        root = new TrieNode();
    }
    map<string, int>m;
    
    void insert(string key, int val) {
        int diff = val - m[key];
        TrieNode *temp = root;
        for(char c : key){
            if(temp->child[c-'a'] == NULL)temp->child[c-'a'] = new TrieNode();
            temp = temp->child[c-'a'];
            temp->value += diff;
        }
        m[key] = val;
    }
    
    int sum(string prefix) {
        for(auto i : m)
            cout<<i.first<<" "<<i.second<<endl;
        TrieNode *temp = root;
        for(char c : prefix){
            if(temp->child[c-'a'] == NULL)return 0;
            temp = temp->child[c-'a'];
        }
        return temp->value;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
