class Node{
    
    Node child [];
    int score;
    
    public Node(){
        child = new Node[26];
        score = 0;
    }
}
class MapSum {

    /** Initialize your data structure here. */
    Node root;
    HashMap<String , Integer> keyVal;
    public MapSum() {
        root = new Node();
        keyVal = new HashMap<String,Integer>();
    }
    
    public void insert(String key, int val) {
        
        int value = val - keyVal.getOrDefault(key, 0);
        keyVal.put(key,val);
        Node curr = root;
        
        for(int i = 0; i < key.length();i++)
        {
            char ch = key.charAt(i);
            if(curr.child[ch - 'a'] == null)
            {
                curr.child[ch - 'a'] = new Node();
            }
            curr = curr.child[ch-'a'];
            curr.score += value;
        }
        
    }
    
    public int sum(String prefix) {
        
        Node curr = root;
        
        for(int i = 0; i < prefix.length();i++)
        {
            char ch = prefix.charAt(i);
            if(curr.child[ch -'a'] == null)
            {
                return 0;
            }
            curr = curr.child[ch - 'a'];
        }
        
        return curr.score;
    }
}

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
