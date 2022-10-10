class MinStack {
public:
    stack<int>temp;
    stack<int>ans;
    MinStack() {
        
    }
    
    void push(int val) {
        if(temp.empty() || val<=getMin())
        {
            ans.push(val);
        }
      temp.push(val);
    }
    
    void pop() {
        if(!temp.empty())
        {
            if(temp.top()==getMin())
            {
                ans.pop();
            }
           temp.pop();
        }
        
    }
    
    int top() {
       
        return temp.top();
    }
    
    int getMin() {
        return ans.top();
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
