class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int i;
        int n = s.size();
        string ans = "";
        stack<char>st;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                if(st.size() > 0)
                {
                    ans += s[i];
                }
                st.push(s[i]);
            }
            else
            {
                if(st.size() > 1)
                {
                    ans += s[i];
                }
                st.pop();
            }
        }
        return ans;
    }
};