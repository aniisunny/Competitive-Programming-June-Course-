class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1)return 1;
        int i=0,j=s.length()-1;
        while(i < j){
            if(!isalnum(s[i]))i++;
            else if(!isalnum(s[j]))j--;
            else if(tolower(s[i]) != tolower(s[j]))return 0;
            else
                i++,j--;
        }
        return 1;
    }
};
