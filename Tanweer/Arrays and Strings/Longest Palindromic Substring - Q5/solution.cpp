class Solution {
public:
    int start, maxl;
    
    void palindrome(string& s , int i , int j)
    {
        while(i>=0 && j<s.length() && s[i] == s[j])
        {
            i--;
            j++;
        }
        if(j-i-1 > maxl)
        {
            start = i+1;
            maxl = j-i-1;
        }
    }
    
    string longestPalindrome(string& s)
    {
        for(int i = 0 ; i<s.length() ; i++)
        {
            palindrome(s , i , i);
            palindrome(s , i , i+1);
        }
        return s.substr(start,maxl);
    }
};