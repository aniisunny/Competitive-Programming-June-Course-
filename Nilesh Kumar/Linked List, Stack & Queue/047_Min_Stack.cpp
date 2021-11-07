class MinStack {
public:
    stack<long long> s;
    long long minElem;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minElem = val;
        }
        else {
            if(val>=minElem) s.push(val);
            else {
                s.push(2*(long long)val-minElem);
                minElem = val;
            }
        }
    }
    
    void pop() {
        if(s.empty()) return ;
        if(s.top()>=minElem) s.pop();
        else {
            minElem = 2*minElem-s.top();
            s.pop();
            }
    }
    
    int top() {
        if(s.empty()) return -1;
        else if(s.top()>=minElem) return s.top();
        else return minElem;
    }
    
    int getMin() {
        return minElem;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */