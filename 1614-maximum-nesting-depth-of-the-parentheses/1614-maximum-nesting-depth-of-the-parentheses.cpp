class Solution {
public:
    int maxDepth(string s) {
        
        int maxi = 0;
        int n = s.size();
        stack<char>st;
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
               if(maxi < st.size())
               {
                maxi = st.size();   
               }
                continue;
            }
            else if(s[i] == ')')
            {
                st.pop();
            }
        }
        return maxi;
    }
};