class Solution {
    public int climbStairs(int n) {
        int first=1;
        int second=1;
        for(int i=2;i<=n;i++)
        {
            int temp=second;
            second+=first;
            first=temp;
        }
        return second;
        
    }
}
