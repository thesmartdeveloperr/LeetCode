class MinStack {
public:
    stack<int> st,st2; 
    int mini=INT_MAX;
    void push(int val) {
        st.push(val);
        if (st2.empty() or val <= getMin())
            st2.push(val);
    }
    
    void pop() {
        if (st.top() == getMin())  st2.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st2.top();
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