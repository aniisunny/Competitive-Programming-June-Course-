class Solution {
    public int[] kWeakestRows(int[][] mat, int k) {
        
        PriorityQueue<int[]> maxheap = new PriorityQueue<>((a,b) -> a[0] != b[0] ? b[0] - a[0] : b[1]-a[1]);
        
        int ans[] = new int[k];
        for(int i = 0; i < mat.length; i++)
        {
            int count = 0;
            for(int j = 0; j < mat[0].length;j++)
            {
                if(mat[i][j] == 1) count++;
                else break;
            }
            maxheap.offer(new int[]{count,i});
        }
        
        while(maxheap.size() > k)
        {
            maxheap.poll();
        }
        
        while(k > 0)
        {
            ans[--k] = maxheap.poll()[1];
            
        }
        return ans;
    }
}
