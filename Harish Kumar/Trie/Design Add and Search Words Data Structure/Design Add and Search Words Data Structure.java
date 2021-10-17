class Node{
    
    Node child [];
    boolean isEnd;
    
    public Node(){
        child = new Node[26];
        isEnd = false;
    }
}


class WordDictionary {
    /** Initialize your data structure here. */
     Node root;
    public WordDictionary() {
       
        root = new Node();
    }
    
    public void addWord(String word) {
        
        Node curr = root;
        
        for(int i = 0 ;i < word.length();i++)
        {
            char ch = word.charAt(i);
            
            if(curr.child[ch - 'a'] == null)
            {
                curr.child[ch-'a'] = new Node();
            }
            
            curr = curr.child[ch - 'a'];
        }
        curr.isEnd = true;
    }
    
    private Boolean helper(String word, int start, Node curr)
    {
        if (curr  == null) return false;
        if(start == word.length())
        {
            if(curr.isEnd)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        char c = word.charAt(start);
        if(c == '.')
        {
            for(int i = 0; i < 26; i++)
            {
                if(helper(word,start+1,curr.child[i])) return true;
            }
        }
        else
        {
            if(helper(word,start+1,curr.child[c - 'a'])) return true;
        }
        
        return false;
    }
    
    public boolean search(String word) {
        
        Node curr = root;
        
        return helper(word,0, curr);
        
        
    }
}


/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */
