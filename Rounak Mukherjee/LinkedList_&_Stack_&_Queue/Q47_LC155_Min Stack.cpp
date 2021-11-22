class MinStack {
public:
     stack<long>lifo; 
     long minn=INT_MAX; 
    MinStack() {
      
    }
    
 

void push(int x) {
    long xx = (long) x;
    if(lifo.size() == 0){
        lifo.push(xx);
        minn = xx;
        return;
    }
    if(xx <= minn){
        lifo.push(2*xx - minn);
        minn = xx;
    }
    else
        lifo.push(xx);
    return;
}

void pop() {
    long tp = lifo.top();
    if(tp <= minn){
        minn = 2*minn - tp;
    }
    lifo.pop();
    return;
}

int top() {
    long tp = lifo.top();
    if(tp <= minn){
        return (int)minn;
    }
    return (int)tp;
}

int getMin() {
    return (int)minn;
}
};

