class Solution {
public:
    int numDecodings(string s) {
        
        int dp[s.length()+1];
        
        for(int i=0;i<=s.length();i++)
            dp[i]=0;
        
        dp[0]=1;
        dp[1]=s[0]=='0'?0:1;
        
        for(int i=2;i<s.length()+1;i++)
        {
            int od=stoi(s.substr(i-1,1));
            int td=stoi(s.substr(i-2,2));
            
            if(od>=1 && od<=9)
                dp[i]+=dp[i-1];  //adding 1 digit 
            if(td>=10 && td<=26)
                dp[i]+=dp[i-2];
        }
        return dp[s.length()];
    }
};
