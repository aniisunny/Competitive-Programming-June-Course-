class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for(int i : nums)
        {
            map.put(i,map.getOrDefault(i,0)+1);
        }
        
        PriorityQueue<Integer> q = new PriorityQueue<>((key1, key2) -> map.get(key2) - map.get(key1));
        q.addAll(map.keySet());
        
        int ans[] = new int[k];
        
        for(int i = 0; i < k; i++)
        {
            ans[i] = q.poll();
        }
        return ans;
        
    }
}


