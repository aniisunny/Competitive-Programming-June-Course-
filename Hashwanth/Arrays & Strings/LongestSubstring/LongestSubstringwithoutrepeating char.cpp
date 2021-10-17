class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {   char ch=s[i]
            if(mp.find(ch)!=mp.end())
                j=max(j,mp[s[i]]+1);
            mp[ch]=i;
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
