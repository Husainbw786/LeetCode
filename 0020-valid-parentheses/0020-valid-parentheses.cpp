class Solution {
public:
    bool isValid(string s) {
        
        stack<int>st;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                int top = st.top();
                if(top == '(' && s[i] == ')')
                {
                    st.pop();
                }
                else if(top == '{' && s[i] == '}')
                {
                    st.pop();
                }
                else if(top == '[' && s[i] == ']')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};