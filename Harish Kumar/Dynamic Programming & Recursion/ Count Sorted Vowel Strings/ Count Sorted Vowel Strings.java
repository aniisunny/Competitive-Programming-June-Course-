class Solution {
    public int countVowelStrings(int n) {
        
        int i = 0;
        int[] dp = new int[5];
        
        while (i < 5) {
            dp[i] = ++i;
        }
        
        while (--n != 0) {
            for (i = 1; i < 5; i++) {
                dp[i] += dp[i - 1];
            }
        }
        
        return dp[4];
    }
}

