class Solution {
    public int maxArea(int[] height) {
        
        int ans = 0;
        int maxans = 0;
        int i = 0;
        int j = height.length - 1;
        
        while(i < j)
        {
            int min = Math.min(height[i],height[j]);
            int dis = j - i;
            maxans = min*dis;
            if(maxans > ans)
            {
                ans = maxans;
            }
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
        
    }
}
