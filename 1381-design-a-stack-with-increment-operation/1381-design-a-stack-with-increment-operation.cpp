class CustomStack {
public:
    vector<int>v;
    int n;
    CustomStack(int maxSize) {
        
        n = maxSize;
    }
    
    void push(int x) {
        if(n == v.size())
        {
            return;
        }
        v.push_back(x);
    }
    
    int pop() {
        if(v.size() > 0)
        {
            int y = v.back();
            v.pop_back();
            return y;
        }
        return -1;
        
    }
    
    void increment(int k, int val) {
         int m = min(k, (int)v.size());
        for(int i=0;i<m;i++)
        {
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */