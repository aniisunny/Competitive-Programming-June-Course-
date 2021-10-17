class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int m = s.size(), n = t.size();
        if(m != n)
            return false;
        int count[26] = {0};
        for(int i = 0; i < m; i++)
        {
            count[s[i] - 'a']++;
        }
        for(int j = 0; j < m; j++)
        {
            count[t[j] - 'a']--;
        }
        for(int i = 0; i < 26; i++)
        {
            if(count[i])
                return false;
        }
        return true;
    }
};