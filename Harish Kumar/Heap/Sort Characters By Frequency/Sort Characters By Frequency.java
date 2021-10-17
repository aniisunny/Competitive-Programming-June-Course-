class Solution {
    public String frequencySort(String s) {
        
        HashMap<Character, Integer> map = new HashMap<>();
        
        for(char c : s.toCharArray())
        {
            map.put(c,map.getOrDefault(c,0) +1);
        }
       
        PriorityQueue<Character> minheap = new PriorityQueue<>((key1,key2) -> map.get(key2) - map.get(key1));
        minheap.addAll(map.keySet());
        
        StringBuilder ans = new StringBuilder();
        while(minheap.size() != 0)
        {
            char c = minheap.poll();
            int count  = map.get(c);
            
            while(count != 0)
            {
                ans.append(c);
                count--;
            }
        }
        
        return ans.toString();
        
    }
}


