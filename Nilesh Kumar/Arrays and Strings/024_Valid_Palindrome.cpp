class Solution {
public:
    bool isAlphaNum(char c) {
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')) return true;
        else return false;
    }
    bool isPalindrome(string s) {
       int start = 0, end = s.length()-1;
        while(start<=end) {
            if(isAlphaNum(s[start]) && isAlphaNum(s[end])) {
                if((s[start]>='0' && s[start]<='9') || (s[end]>='0'&& s[end]<='9')) {
                    if(s[start]==s[end]) {
                        start++; end--;
                    }
                    else return false;
                }
                else if(s[start]==s[end] || s[start]==(s[end]+32) || s[start]==(s[end]-32)) {
                    start++; end--;
                }
                else return false;
            }
            else if(isAlphaNum(s[start])) end--;
            else start++;
        }
        return true;
    }
};