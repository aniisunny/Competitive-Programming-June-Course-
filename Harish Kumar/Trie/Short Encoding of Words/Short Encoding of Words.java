class Trie {
    
    Trie[] children;
    
    public Trie () {
        children = new Trie[26];
    }
}

class Solution {
    public int minimumLengthEncoding(String[] words) {
        
        int length = 0;
        Trie root = new Trie ();
        
        Arrays.sort (words, (word1, word2) -> word2.length () - word1.length ());
        
        for (String word : words) {
            Trie node = root;
            boolean exist = true;
            
            for (int i = word.length () - 1; i >= 0; i--) {
                char c = word.charAt (i);
                
                if (node.children[c - 'a'] == null) {
                    exist = false;
                    node.children[c - 'a'] = new Trie ();
                }
                
                node = node.children[c - 'a'];
            }
            
            if (!exist) {
                length += word.length () + 1;
            }
        }
        
        return length;
    }
}
