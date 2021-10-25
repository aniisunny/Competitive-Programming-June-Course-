class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        bool dp[n][n];
        int maxlen = 0;
        int init=0;
        memset(dp, false, sizeof(dp));
        for(int g=0; g<n; g++) {
            for(int i=0, j=g; j<n; i++, j++) {
                dp[i][j] = false;
                if(g==0) {
                    dp[i][j] = true;
                }
                else if(g==1) {
                    if(s[i]==s[j]) dp[i][j] = true;
                }
                else if(dp[i+1][j-1]) {
                    if(s[i]==s[j]) dp[i][j] = true;
                    
                }
            if(dp[i][j] && (j-i+1)>maxlen) {
                maxlen = j-i+1;
                init=i;
            }
            }
        }
        return s.substr(init, maxlen);
    }
};