class Solution {
public:
    string removeStars(string s) {
        
        stack<char>st;
        int n = s.size();
        string ans = "";
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] != '*')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};