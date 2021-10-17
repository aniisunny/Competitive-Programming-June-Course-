class Solution {
public:
    bool isAnagram(string s, string t) {
        int c[26]={0};
        for(auto ch:s)
            c[ch-'a']++;
        for(auto ch:t)
            c[ch-'a']--;
        for(auto n:c)
            if(n)
                return 0;
        return 1;
    }
};
