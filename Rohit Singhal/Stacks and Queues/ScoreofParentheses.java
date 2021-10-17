class Solution {

    public int scoreOfParentheses(String s) {
        Stack<Integer> stk = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                stk.push(0);
            } else {
                int temp = 0;
                while (stk.peek() != 0) {
                    temp += stk.pop();
                }
                stk.pop();
                stk.push(Math.max(2 * temp, 1)); // 1 for the case ()
            }
        }
        int ans = 0;
        while (!stk.isEmpty()) {
            ans += stk.pop();
        }
        return ans;
    }
}
