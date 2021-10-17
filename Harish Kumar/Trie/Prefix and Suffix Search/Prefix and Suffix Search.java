class WordFilter {
    
    HashMap<String, Integer> map;

    public WordFilter(String[] words) {
        
        map = new HashMap<> ();
        
        for (int index = 0; index < words.length; index++) {
            String word = words[index];
            
            for (int i = 0; i < word.length (); i++) {
                String s = word.substring (0, i + 1);
                
                for (int j = word.length () - 1; j >= 0; j--) {
                    StringBuilder str = new StringBuilder ();
                    str.append (s);
                    str.append ("#");
                    str.append (word.substring (j));
                    
                    map.put (str.toString (), index);
                }
            }
        }
    }
    
    public int f(String prefix, String suffix) {
        
        StringBuilder str = new StringBuilder ();
        str.append (prefix);
        str.append ("#");
        str.append (suffix);
        
        return map.getOrDefault (str.toString (), -1);
    }
}
