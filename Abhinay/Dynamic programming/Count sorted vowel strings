class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>dp(5);
        for(int i = 0; i<5; i++)
            dp[i] = i+1;
        while(--n){
            for(int i = 1; i<5; i++)
                dp[i] += dp[i-1];
        }
        return dp[4];
    }
};
