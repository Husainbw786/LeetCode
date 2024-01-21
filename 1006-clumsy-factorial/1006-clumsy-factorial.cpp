class Solution {
public:
    int clumsy(int n) {
     
        stack<int>st;
        st.push(n);
        vector<int>v;
        int i;
        int count = 1;
        for(i=n-1;i>0;i--)
        {
            int x = st.top();
            if(count == 1)
            {
                int mul = x * i;
                st.pop();
                st.push(mul);
                count = 2;
            }
            else if(count == 2)
            {
                int div = x / i;
                st.pop();
                st.push(div);
                count = 3;
            }
            else if(count == 3)
            {
                int add = x + i;
                st.pop();
                st.push(add);
                count = 4;
            }
            else if(count == 4)
            {
                int sub = -1 * i;
                st.push(sub);
                count = 1;
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
   
    }
};