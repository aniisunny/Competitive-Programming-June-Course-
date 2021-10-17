class Solution {
    public int[][] kClosest(int[][] points, int k) {
        
        
        PriorityQueue<int[]> maxheap = new PriorityQueue<>(Comparator.comparing(a -> -a[0] * a[0] - a[1]*a[1]));
        
        for(int num[] : points)
        {
            maxheap.offer(num);
            
            if(maxheap.size() > k)
            {
                maxheap.poll();
            }
        }
        int ans[][] = new int[k][2];
        
        while(k-- > 0)
        {
            ans[k] = maxheap.poll();
            
        }
        return ans; 
            
    }
}

