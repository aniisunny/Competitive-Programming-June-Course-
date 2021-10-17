class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,ArrayList<String>> map = new HashMap<String,ArrayList<String>>();
        List<List<String>> r=new ArrayList<>();
        
        for(String i:strs)
        {
            char[] t=i.toCharArray();
             Arrays.sort(t);
            String s=String.valueOf(t);
            boolean k=map.containsKey(s);
            if(!k)
            {
                map.put(s,new ArrayList<>());
                
            }
            map.get(s).add(i);
            
        }
    for (Map.Entry<String,ArrayList<String>> entry : map.entrySet()){
          
                              r.add(entry.getValue());}
    
    return r;
    }
}
