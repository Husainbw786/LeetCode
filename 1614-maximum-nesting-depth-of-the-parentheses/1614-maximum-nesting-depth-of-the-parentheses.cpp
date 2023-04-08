class Solution {
public:
    int maxDepth(string s) {
        
        int n = s.size();
        int i;
        stack<char>st;
        int maxi = 0;
        int left = 0;
        int right = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            if(s[i] == ')')
            {
                st.pop();
            }
            if(maxi < st.size())
            {
                maxi = st.size();
            }
        }
       
        return maxi;
    }
};