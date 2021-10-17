class Solution {
public:
    int start, maxlength;
    void expandAroundCenter(string s, int i, int j){
        while(i>=0 && j<s.length() && s[i]==s[j])
            i--,j++;
        if(j-i-1 > maxlength){
            start = i+1;
            maxlength = j-i-1;
        }
    }
    string longestPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            expandAroundCenter(s, i, i);    // odd
            expandAroundCenter(s, i, i+1);  // even
        }
        return s.substr(start, maxlength);
    }
};
