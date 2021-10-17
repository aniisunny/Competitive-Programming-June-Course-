class Solution {
    public int kthSmallest(int[][] matrix, int k) {
         Comparator<Integer> comparator = (o1, o2) -> o2-o1;
        
        PriorityQueue<Integer> maxheap = new PriorityQueue<>(comparator);
        
        for(int i = 0; i < matrix.length;i++)
        {
            for(int j = 0; j < matrix[0].length; j++)
            {
                maxheap.add(matrix[i][j]);
                if(maxheap.size() > k)
                {
                    maxheap.poll();
                }
            }
        }
        
        return maxheap.poll();
    }
}


