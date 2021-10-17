class TrieNode {
    
    TrieNode map [];
    boolean isEnd;
    public TrieNode(){
        
        map = new TrieNode[26];
        isEnd = false;
    }
    
}

class Trie {
    /** Initialize your data structure here. */
    TrieNode root;
    public Trie() {
        
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    public void insert(String word) {
        TrieNode temp = root;
        for(char c : word.toCharArray())
        {
            if(temp.map[c - 'a'] == null)
            {
                temp.map[c - 'a'] = new TrieNode();
            }
            temp = temp.map[c - 'a'];
        }
        
        temp.isEnd = true;
        
    }
    
    public TrieNode commonSearch(String word)
    {
        TrieNode temp = root;
        
        for(char c : word.toCharArray())
        {
            if(temp.map[c - 'a'] == null)
            {
                return null;
            }
            
            temp = temp.map[c - 'a'];
        }
        return temp;
    }
    
    /** Returns if the word is in the trie. */
    public boolean search(String word) {
        
        TrieNode temp = commonSearch(word);
        return temp != null && temp.isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public boolean startsWith(String prefix) {
        
        return commonSearch(prefix) != null;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */
