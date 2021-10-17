class Solution {
public:
    int firstUniqChar(string s) 
    {
        if(s.length() == 0 || s.length() == 1)
        {
            return s.length()-1;
        }
        vector<vector<int>> ans(26 , vector<int>(2,0));
        for(int i = 0 ; i<s.length() ; i++)
        {
            ans[s[i]-'a'][0]++;
            ans[s[i]-'a'][1] = i;
        }
        int res = INT_MAX;
        for(int i = 0 ; i<26 ; i++)
        {
            if(ans[i][0] == 1)
            {
                res = min(res,ans[i][1]);
            }
        }
        if(res >= s.length())
        {
            return -1;
        }
        return res;
    }
};