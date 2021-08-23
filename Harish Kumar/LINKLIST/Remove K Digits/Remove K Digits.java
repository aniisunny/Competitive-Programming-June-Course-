class Solution {
    public String removeKdigits(String num, int k) {
        
        if(num.length() == k) return "0";
        Stack<Character> st = new Stack<>();
        
        for(int i = 0; i< num.length(); i++)
        {
            char ch = num.charAt(i);
            
            while(st.size() > 0 && k > 0 && st.peek() > ch)
            {
                st.pop();
                k--;
            }
            st.push(ch);
        }
        
        while(k-- != 0)
        {
            st.pop();
        }
        
        char ans[] = new char[st.size()];
        
        StringBuffer sb = new StringBuffer();
        
        for(int i = 0; i < st.size(); ++i)
        {
            sb.append(st.get(i));
        }
        
        while(sb.length() > 1 && sb.charAt(0) == '0') sb.deleteCharAt(0);
        
        return sb.toString();
    }
}

