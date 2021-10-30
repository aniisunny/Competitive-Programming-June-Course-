class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
             if(isalpha(s[i]) || isdigit(s[i])){
                 str+=tolower(s[i]);
             }
        }
       int start=0;
        int end=str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
         start++;
            end--;
        }
   return true;
    }
};