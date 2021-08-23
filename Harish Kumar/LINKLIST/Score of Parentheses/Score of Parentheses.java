class Solution {
    public int scoreOfParentheses(String s) {
        
        Stack<Integer> stack = new Stack<>();
        
        for(int i = 0; i <s.length(); i++)
        {
            if(s.charAt(i) == '(')
            {
                stack.push(-1);
            }
            else
            {
                if(stack.peek() == -1)
                {
                    stack.pop();
                    stack.push(1);
                }
                else
                {
                    int val = 0;
                    while(stack.peek() != -1)
                    {
                        val += stack.pop();
                    }
                    stack.pop();
                    stack.push(val*2);
                }
            }
        }
        
        int ans = 0;
        while(stack.size() > 0)
        {
            ans += stack.pop();
        }
        return ans;
    }
}
