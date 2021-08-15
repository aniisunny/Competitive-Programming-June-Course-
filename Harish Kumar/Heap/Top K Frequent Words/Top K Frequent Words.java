class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        
        List<String> ans = new ArrayList<>();
        
        HashMap<String, Integer> map = new HashMap<>();
        
        for(String s : words)
        {
            map.put(s, map.getOrDefault(s,0)+1);
        }
        
        PriorityQueue<String> maxheap = new PriorityQueue<>((key1, key2) -> map.get(key1) == map.get(key2) ? key1.compareTo(key2) : map.get(key2) - map.get(key1));
        
        maxheap.addAll(map.keySet());
        
        while(k != 0)
        {
            ans.add(maxheap.poll());
            k--;
        }

        return ans;
    }
}


