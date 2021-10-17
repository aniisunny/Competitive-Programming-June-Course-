class Solution {
    public boolean isPossible(int[] weights, int mid, int days)
    {
        int d = 1;
        int sum = 0;
        for(int i = 0;i < weights.length; i++)
        {
            sum+= weights[i];
            
            if(sum > mid)
            {
                d++;
                sum = weights[i];
            }
        }
        return d <= days;
    }
    public int shipWithinDays(int[] weights, int days) {
        
        int max = 0;
        int sum = 0;
        
        for(int i = 0;i< weights.length; i++)
        {
            sum += weights[i];
            max = Math.max(max,weights[i]);
        }
        
        if(weights.length == days)
        {
            return max;
        }
        
        int low = max;
        int high = sum;
        int ans = 0;
        while(low <= high)
        {
            int mid = low +(high - low) /2;
            
            if(isPossible(weights,mid,days) == true)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid +1;
            }
        }
        return ans;
    }
}
