class MinStack {
    Stack<Long> stack;
    Long min;
    /** initialize your data structure here. */
    public MinStack() {
        stack = new Stack<>();
        min = Long.MAX_VALUE;
    }
    
    public void push(int value) {
        Long val = Long.valueOf(value);
        if(stack.isEmpty())
        {
            min = val;
            stack.push(val);
        }
        else
        {
            if(val < min)
            {
                stack.push(val + val - min);
                min = val;
            }
            else
            {
                stack.push(val);
            }
        }
    }
    
    public void pop() {
        if(stack.isEmpty()) return;
        Long val = stack.pop();
        if(val < min)
        {
            min = 2*min-val;
        }
        
    }
    
    public int top() {
        Long val = stack.peek();
        if(val < min)
        {
            return min.intValue();
        }
        else
        {
            return val.intValue();
        }
        
    }
    
    public int getMin() {
        return min.intValue();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
