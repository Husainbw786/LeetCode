class Solution {
public:
    bool isValid(string s) {
        
        stack<int>st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
             else 
             {
    if(st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '['))
    {
        return false;
    }      
            st.pop();
             }
        }
        return st.empty();
    }
};