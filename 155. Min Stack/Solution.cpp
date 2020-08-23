class MinStack {
public:
    /** initialize your data structure here. */
    // int minV;
    vector<int>stack;
    vector<int>minStack;
    MinStack() {
        stack = {};
        minStack = {INT_MAX};
    }
    
    void push(int x) {
        stack.push_back(x);
        if(minStack.back() > x) minStack.push_back(x);
        else minStack.push_back(minStack.back());
    }
    void pop() {
        minStack.pop_back();
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
