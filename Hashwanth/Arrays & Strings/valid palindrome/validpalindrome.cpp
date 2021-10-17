class Solution {
public:
    bool isalphanum(char r)
    {return isalpha(r) || isdigit(r);}
    bool isPalindrome(string s) {
       string str,t;
        for(auto x:s)
        {
            if(isalphanum(x))
                str+=toupper(x);
        }
        t=str;
        reverse(str.begin(),str.end());
        return str==t;
    }
};
