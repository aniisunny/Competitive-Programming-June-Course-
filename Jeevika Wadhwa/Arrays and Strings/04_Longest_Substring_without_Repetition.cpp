class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        int index[128] = {0};
        for(int i=0,j=0;i<s.length();i++){
            char c = s[i];
            j = max(j, index[c]);
            maxlength = max(maxlength, i-j+1);
            index[c] = i+1;
        }
        return maxlength;
    }
};
