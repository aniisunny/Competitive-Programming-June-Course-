stack<int>q1,q2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(q2.empty())
            while(!q1.empty())
            {
                q2.push(q1.top());
                q1.pop();
            }
        int fr=q2.top();
        q2.pop();
        return fr;
    }
    
    /** Get the front element. */
    int peek() {
         if(q2.empty())
            while(!q1.empty())
            {
                q2.push(q1.top());
                q1.pop();
            }
       return q2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (q1.empty() && q2.empty());
    }
};
