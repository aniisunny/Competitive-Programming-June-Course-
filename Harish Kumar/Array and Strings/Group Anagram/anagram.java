class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        
        List<List<String>> ans = new ArrayList<>();
        HashMap<String,ArrayList<String>> temp = new HashMap<>();
        
       
        
     for(String str1 :strs )
        {
           char c[] = str1.toCharArray();
            Arrays.sort(c);
        
            String sorted = String.valueOf(c);
            
            if(!temp.containsKey(sorted))
            {
                temp.put(sorted,new ArrayList<>());
               
            }
            temp.get(sorted).add(str1);
            
        }
        
        
      ans.addAll(temp.values());
        return ans;
        
    }
}
