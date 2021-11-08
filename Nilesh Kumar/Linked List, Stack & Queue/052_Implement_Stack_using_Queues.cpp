class MyStack {
public:
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        if(q.empty()) q.push(x);
        else {
            int y = q.size();
            q.push(x);
            while(y--) {
                cout << q.front();
                q.push(q.front());
                q.pop();
            }
        }
    }
    
    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */