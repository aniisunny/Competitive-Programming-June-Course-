class Solution {
public:
    bool wordBreak(string s, vector<string>& d) {
        vector<bool>dp(s.size()+1, false);
        dp[0] = true;
        for(int i = 1; i<=s.size(); i++){
            for(int j = 0; j<i; j++){
                if(dp[j] && find(d.begin(), d.end(), s.substr(j, i-j)) != d.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp.back();
    }
};
