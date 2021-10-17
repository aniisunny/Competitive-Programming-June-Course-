class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    stack<int>st;
    stack<int>s;
    
    void push(int x) {
        if(s.empty() || x<=s.top())
          s.push(x);
        st.push(x);
    }
    
    void pop() {
        if(st.top()==s.top())
            s.pop();
        st.pop(); 
    }
    
    int top() {
      return st.top(); 
    }
    
    int getMin() {
       return s.top();
    }
};
