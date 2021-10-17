class Node{
    
    Node child [];
    List<String> product;
    
    public Node(){
        child = new Node[26];
        product = new ArrayList<>();
    }
}
class Solution {
    Node root = new Node();
    public List<List<String>> suggestedProducts(String[] products, String searchWord) {
        List<List<String>> res = new ArrayList<>();
       if (products.length == 0 || searchWord.length () == 0)
       {
           return new ArrayList();
       }
    
        Arrays.sort(products);
        for(String s : products)
        {
            AddToTrie(root,s);
        }
        
        for(char c : searchWord.toCharArray())
        {
            List<String> list = new ArrayList<>();
            root = root == null ? null : root.child[c - 'a'];
            
            for (int i = 0; root != null && i < 3 && i < root.product.size (); i++) 
            {
                list.add (root.product.get (i));
            }
            res.add(list);
        }
        return res;
        
    }
    
    private void AddToTrie(Node root, String words)
    {
        Node curr = root;
        
        for(char c : words.toCharArray())
        {
            if(curr.child[c -'a'] == null)
            {
                curr.child[c-'a'] = new Node();
            }
            
            curr = curr.child[c-'a'];
            curr.product.add(words);
        }     
    }
}


