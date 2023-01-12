class MyStack {
public:
    queue<int>q;
   
    MyStack() {
        
    }
    
    void push(int x) {
        
       q.push(x); 
    }
    
    int pop() {
        int x;
         queue<int>q1;
        while(!q.empty())
        {
            if(q.size() == 1)
            {
                x = q.front();
                q.pop();
                break;
            }
            int ans = q.front();
            q1.push(ans);
            q.pop();
        }
        q = q1;
        return x;
    }
    
    int top() {
        int x;
         queue<int>q1;
         while(!q.empty())
        {
            if(q.size() == 1)
            {
                 x = q.front();
                 q.pop();
                 break;
            }
             int ans = q.front();
            q1.push(ans);
            q.pop();
        }
        q1.push(x);
        q = q1;
        return x;
        
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