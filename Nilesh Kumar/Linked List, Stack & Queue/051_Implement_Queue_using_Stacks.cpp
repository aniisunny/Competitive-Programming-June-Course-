class MyQueue {
public:
    stack<int> s;
    stack<int> ss;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!ss.empty()) {
            s.push(ss.top());
            ss.pop();
        }
        s.push(x);
        while(!s.empty()) {
            ss.push(s.top());
            s.pop();
        }
    }
    
    int pop() {
        int x = ss.top();
        ss.pop();
        return x;
    }
    
    int peek() {
        return ss.top();
    }
    
    bool empty() {
        return ss.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */