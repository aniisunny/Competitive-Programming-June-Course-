class Node{
    
    Node child [];
    boolean isEnd;
    
    public Node(){
        child = new Node[26];
        isEnd = false;
    }
}
class Solution {
    Node root = new Node();
    boolean flag[][];
    public List<String> findWords(char[][] board, String[] words) {
        
        Set<String> res = new HashSet<>();
        flag = new boolean[board.length][board[0].length];
        
        AddToTrie(words);
        
        for(int i = 0; i < board.length;i++)
        {
            for(int j = 0; j < board[0].length;j++)
            {
                if(root.child[board[i][j] - 'a'] != null)
                {
                    search(board,i,j,root,"",res);
                }
            }
        }
        return new ArrayList(res);
    }
    private void AddToTrie(String [] words)
    {
        for(String s : words)
        {
            Node curr = root;
            
            for(int i = 0 ;i < s.length();i++)
            {
                char ch = s.charAt(i);
                if(curr.child[ch - 'a'] == null)
                {
                    curr.child[ch-'a'] = new Node();
                }
                curr = curr.child[ch - 'a'];
            }
        curr.isEnd = true;
        }
    }
    
    public void search(char[][] board, int i, int j,Node root,String word, Set<String> res)
    {
       if(i >= board.length || i < 0 || j >= board[0].length || j < 0 || flag[i][j] || root.child[board[i][j] - 'a'] == null)
        {
            return;
        }
        
        flag[i][j] = true;
        root = root.child[board[i][j] - 'a'];
        
        if(root.isEnd)
        {
            res.add(word + board[i][j]);
        }
        
        search(board, i - 1, j, root, word + board[i][j], res);
        search(board, i + 1, j, root, word + board[i][j], res);
        search(board, i, j + 1, root, word + board[i][j], res);
        search(board, i, j - 1, root, word + board[i][j], res);
        
        flag[i][j] = false;
    }
}
