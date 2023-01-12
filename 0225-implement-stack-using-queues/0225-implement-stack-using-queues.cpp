class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        
       q.push(x); 
    }
    
    int pop() {
         queue<int>q1;
        while(q.size()!=1)
        {
            int top=q.front();
            q.pop();
            q1.push(top);
        }
        int ans=q.front();
        q.pop();
        q=q1;
        return ans;
    }
    
    int top() {
        queue<int>q1;
        while(q.size()!=1)
        {
            int top=q.front();
            q.pop();
            q1.push(top);
        }
        int ans=q.front();
        int top=q.front();
        q.pop();
        q1.push(top);
        q=q1;
        return ans;
        
    }
    
    bool empty() {
        
        if(q.empty())
        {
            return true;
        }
        return false;   
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