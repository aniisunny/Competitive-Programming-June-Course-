class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '('){
                stack.push(')');
            }
            else if(s[i] == '['){
                stack.push(']');
            }
            else if(s[i] == '{'){
                stack.push('}');
            }
            else{
                char t = stack.empty() ? '#' : stack.top();
                if(t != s[i]){
                    return 0;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
