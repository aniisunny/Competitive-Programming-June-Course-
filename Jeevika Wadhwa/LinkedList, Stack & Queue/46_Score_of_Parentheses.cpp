class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stack;
        stack.push(0);
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '(')stack.push(0);
            else{
                int a = stack.top();stack.pop();
                int b = stack.top();stack.pop();
                a = max(1, 2*a);
                stack.push(a+b);
            }
        }
        return stack.top();
    }
};
