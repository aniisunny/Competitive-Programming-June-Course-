class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> mp;
        int longest = 0;
        int i=0, j=0;
        while(j<s.length()) {
            if(mp.count(s[j]) && mp[s[j]]>=i) {
                i = mp[s[j]]+1;
                mp[s[j]] = j;
            }
            else {
                mp[s[j]] = j;
                longest = max(longest, j-i+1);
            }
            j++;
        }
        return longest;
    }
};

/*
"tmmzuxt"
*/