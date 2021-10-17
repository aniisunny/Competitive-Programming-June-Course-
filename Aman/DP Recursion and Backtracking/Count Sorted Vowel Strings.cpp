class Solution {
public:
    int countVowelStrings(int n) {
        
        vector<int>dp(5,1);
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=3;j>=0;j--)
            {
                dp[j]+=dp[j+1];
            }
        }
        
        for(int i=0;i<5;i++)
            res+=dp[i];
        
        return res;
    }
};
