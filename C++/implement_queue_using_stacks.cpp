class MyQueue {
    vector<int> stack;
    
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        stack.push_back(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(stack.size() == 0) return -1;
        
        int front_num = stack[0];
        stack.erase (stack.begin());
        
        return front_num;
    }
    
    /** Get the front element. */
    int peek() {
        if(stack.size() == 0) return -1;
        
        return stack[0];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return stack.size() == 0;
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
