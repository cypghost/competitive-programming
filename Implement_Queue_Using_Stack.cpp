class MyQueue {
public:
    stack<int>temp;
    stack<int>ans;
    int y;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        temp.push(x);
    }
    
    int pop() {
        if (empty())
        {
        }
        else if(ans.empty() && !temp.empty())
        {
            while(!temp.empty())
            {
                ans.push(temp.top());
                temp.pop();
            }
            y=ans.top();
            ans.pop();
            
        }
        else
        {
            y=ans.top();
            ans.pop();
        }
        return y;
    }
    
    int peek() {
        
        if (empty())
        {
        }
        else if(ans.empty() && !temp.empty())
        {
            while(!temp.empty())
            {
                ans.push(temp.top());
                temp.pop();
            }
            y=ans.top();
            
        }
        else
        {
            y=ans.top();
        }
        return y;
    }
    
    bool empty() {
        if(ans.empty() && temp.empty())
            return true;
        else
            return false;
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
