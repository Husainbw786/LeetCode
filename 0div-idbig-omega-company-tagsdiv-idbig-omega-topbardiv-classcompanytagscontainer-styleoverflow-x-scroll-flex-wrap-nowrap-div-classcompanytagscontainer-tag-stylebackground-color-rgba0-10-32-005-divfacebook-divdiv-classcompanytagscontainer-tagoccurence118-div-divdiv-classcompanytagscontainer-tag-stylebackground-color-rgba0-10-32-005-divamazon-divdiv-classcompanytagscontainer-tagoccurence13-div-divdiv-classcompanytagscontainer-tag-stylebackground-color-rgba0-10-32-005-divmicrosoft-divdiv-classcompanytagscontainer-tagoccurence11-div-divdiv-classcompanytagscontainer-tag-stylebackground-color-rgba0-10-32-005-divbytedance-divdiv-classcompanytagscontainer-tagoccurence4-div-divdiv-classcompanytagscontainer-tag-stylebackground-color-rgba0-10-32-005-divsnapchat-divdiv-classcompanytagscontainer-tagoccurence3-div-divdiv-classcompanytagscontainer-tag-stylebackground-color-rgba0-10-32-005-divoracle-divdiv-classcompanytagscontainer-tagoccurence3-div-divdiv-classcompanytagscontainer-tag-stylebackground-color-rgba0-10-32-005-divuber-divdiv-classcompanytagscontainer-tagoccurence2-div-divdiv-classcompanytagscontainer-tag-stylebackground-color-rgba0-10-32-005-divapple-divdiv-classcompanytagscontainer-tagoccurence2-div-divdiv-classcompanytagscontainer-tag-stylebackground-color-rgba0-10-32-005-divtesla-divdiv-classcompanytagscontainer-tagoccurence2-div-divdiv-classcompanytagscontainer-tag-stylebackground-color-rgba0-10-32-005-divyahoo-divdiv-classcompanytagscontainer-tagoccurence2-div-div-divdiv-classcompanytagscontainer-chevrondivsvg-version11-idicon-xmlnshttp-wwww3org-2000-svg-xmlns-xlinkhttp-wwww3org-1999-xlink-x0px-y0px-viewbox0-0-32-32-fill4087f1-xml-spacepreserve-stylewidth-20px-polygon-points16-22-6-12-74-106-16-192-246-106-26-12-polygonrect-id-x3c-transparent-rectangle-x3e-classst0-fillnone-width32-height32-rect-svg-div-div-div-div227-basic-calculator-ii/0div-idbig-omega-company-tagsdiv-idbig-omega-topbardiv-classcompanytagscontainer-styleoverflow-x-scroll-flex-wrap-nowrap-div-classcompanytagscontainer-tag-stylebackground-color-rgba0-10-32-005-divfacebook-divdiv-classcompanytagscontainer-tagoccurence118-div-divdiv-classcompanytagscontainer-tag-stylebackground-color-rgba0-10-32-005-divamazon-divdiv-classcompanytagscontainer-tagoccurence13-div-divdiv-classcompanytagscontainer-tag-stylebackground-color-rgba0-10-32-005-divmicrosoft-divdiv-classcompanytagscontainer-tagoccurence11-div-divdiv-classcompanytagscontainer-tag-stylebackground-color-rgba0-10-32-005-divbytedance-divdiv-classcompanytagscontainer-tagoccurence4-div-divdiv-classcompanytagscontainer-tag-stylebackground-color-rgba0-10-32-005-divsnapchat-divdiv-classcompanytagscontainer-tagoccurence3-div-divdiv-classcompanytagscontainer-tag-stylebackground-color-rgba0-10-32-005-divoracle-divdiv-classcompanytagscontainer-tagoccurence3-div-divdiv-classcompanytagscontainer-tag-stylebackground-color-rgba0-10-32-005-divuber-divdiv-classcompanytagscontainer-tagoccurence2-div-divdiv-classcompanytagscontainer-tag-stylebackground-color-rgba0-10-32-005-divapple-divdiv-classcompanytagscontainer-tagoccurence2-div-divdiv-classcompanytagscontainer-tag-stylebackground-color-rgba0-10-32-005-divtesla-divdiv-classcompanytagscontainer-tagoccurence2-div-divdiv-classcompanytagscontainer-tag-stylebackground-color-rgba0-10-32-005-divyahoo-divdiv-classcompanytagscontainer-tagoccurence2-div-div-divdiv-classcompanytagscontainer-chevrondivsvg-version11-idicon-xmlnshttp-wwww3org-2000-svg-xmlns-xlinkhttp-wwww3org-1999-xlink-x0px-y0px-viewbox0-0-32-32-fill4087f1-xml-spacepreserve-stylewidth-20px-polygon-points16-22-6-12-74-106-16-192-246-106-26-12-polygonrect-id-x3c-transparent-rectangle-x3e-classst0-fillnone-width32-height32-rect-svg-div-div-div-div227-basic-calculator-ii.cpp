class Solution {
public:
    int calculate(string s) {
        
        s += '+';
        stack<int>st;
        int n = s.size();
        long long int ans = 0;
        long long int curr = 0;
        int i = 0;
        char sign = '+';
        for(i=0;i<n;i++)
        {
             if(isdigit(s[i]))
             {
                 curr = curr*10 + (s[i]-'0');
             }
            else if(s[i] == '+' || s[i] == '-'  || s[i] == '*' || s[i] == '/' )
            {
                if(sign == '+')
                {
                    st.push(curr);
                }
                else if(sign == '-')
                {
                    st.push(curr*-1);
                }
                else if(sign == '*')
                {
                    int top = st.top();
                    st.pop();
                    st.push(curr*top);
                }
                else if(sign == '/')
                {
                    int top = st.top();
                    st.pop();
                    st.push(top/curr); 
                }
               
                sign = s[i];
                curr = 0;
            }
           
        }
                        
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};