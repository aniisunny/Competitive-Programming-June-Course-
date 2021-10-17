class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}
    stack<pair<int,int>>s;
    
    void push(int val) {
        if(s.empty())
            s.push({val, val});
        else{
            int m = min(val, s.top().second);
            s.push({val, m});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
