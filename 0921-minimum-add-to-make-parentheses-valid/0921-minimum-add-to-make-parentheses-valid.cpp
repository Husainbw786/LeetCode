class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>st;
        int i;
        int n = s.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    count++;
                }
            }
        }
        int ans = st.size() + count;
        return ans;
    }
};