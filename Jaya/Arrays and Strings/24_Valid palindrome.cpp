class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(auto i:s){
            if(isalnum(i)){
                st.push_back(tolower(i));
            }
        }
        int i=0;
        int j= st.size()- 1;
        while(j>i){
           if(st[i++]!= st[j--]){
                    return false;
                }
        }
        return true;
        
    }
};
