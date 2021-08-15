class KthLargest {
    PriorityQueue<Integer> q = new PriorityQueue<>();
    final int k;
    public KthLargest(int k, int[] nums) {
        this.k = k;
        q = new PriorityQueue<>(k);
        
        for(int n : nums )
        {
            add(n);
        }
    }
    
    public int add(int val) {
        if (q.size() < k)
                q.offer(val);
            else if (q.peek() < val) {
                q.poll();
                q.offer(val);
            }
            return q.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */



