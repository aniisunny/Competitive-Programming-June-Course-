class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        int i=0;
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            i++;
            }
        else return false;
        while(i!=s.size()){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
            else{
                 if((s[i]=='}' ||s[i]==')' || s[i]==']') && st.empty()){
                    return false;
                }
                if(s[i]=='}' && st.top()=='{'){
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                }
                else if(s[i]==')' && st.top()=='('){
                    
                    st.pop();
                }
                else{
                    break;
                }
            }
            i++;
        }
      
         return st.empty();
        
    }
};