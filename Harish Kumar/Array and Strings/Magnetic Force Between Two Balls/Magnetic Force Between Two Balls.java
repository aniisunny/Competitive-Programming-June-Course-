class Solution {
    public boolean isAnswer(int[] arr, int mid, int m)
    {
        int count = 1;
        int prev = arr[0];
        
        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] - prev >= mid)
            {
                prev = arr[i];
                count++;
            }
        }
        return count >= m;
    }
    public int maxDistance(int[] position, int m) {
        
        Arrays.sort(position);
        
        int start = 0;
        int end = position[position.length-1];
        
        int ans = 0;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(isAnswer(position, mid, m))
            {
                ans = mid;
                start = mid +1;
            }
            else
            {
                end = mid -1;
            }
        }
        return ans;
    }
}

