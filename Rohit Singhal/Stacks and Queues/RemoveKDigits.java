class Solution {
    public String removeKdigits(String num, int k) {
        
       Stack<Character> stack=new Stack<>();
        for(int i=0;i<num.length();i++)
        {
            char c=num.charAt(i);
            
             while(!stack.isEmpty() && stack.peek()>c && k>0)
            {
                stack.pop();
                k--;
            }
            if(!stack.isEmpty() || c!='0')
            stack.push(c);
            
            
        }
        while(!stack.isEmpty() && k!=0)
        {
            stack.pop();
            k--;
        }
        // String ans="";
        if(stack.isEmpty())
            return "0";
        
        StringBuilder sb = new StringBuilder();
        while(!stack.isEmpty())
            sb.append(stack.pop());
        sb.reverse();
        // while(!stack.isEmpty())
        // {
        //     ans=stack.pop()+ans;
        // }
       return sb.toString();
       
        
    }
}
