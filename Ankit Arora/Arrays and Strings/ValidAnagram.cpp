class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length() != t.length()) return false;
        for(int i=0 ; i<s.length() ; i++)
        {
            for(int j=i ; j<t.length() ; j++)
            {
                if(s[i]!=t[i])
                    return false;
                else
                    break;
            }
        }
        return true;

    }
};
