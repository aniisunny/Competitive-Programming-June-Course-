class Solution {
    public int findKthLargest(int[] nums, int k) {
        
        PriorityQueue<Integer> minheap = new PriorityQueue<>(k);
        
        int ans = 0;
        for(int i : nums)
        {
            minheap.add(i);
            
            if(minheap.size() > k)
            {
                minheap.poll();
            }
        }
        return ans = minheap.poll();
    }
}
