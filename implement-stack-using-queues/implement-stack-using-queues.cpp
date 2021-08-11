class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while(q1.size()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    int pop() {
        int x=q1.front();
        q1.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();   
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.size()==0;
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