class Solution {
public:
    bool isPalindrome(string s) 
    {
        int end = s.size()-1 , start = 0 ;
        while (start<end)
        {
            while(start < end && !(isalnum(s[start])))
            {
                ++start;
            }
              
            while(start < end && !(isalnum(s[end])))
            {
                --end;
            }
            if(tolower(s[start]) != tolower(s[end]))
            {
                return false;
            } 
            else
            {
              ++start;
              --end;
            }
        }
        return true;
    }
};