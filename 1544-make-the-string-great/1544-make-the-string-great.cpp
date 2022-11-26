class Solution {
public:
    string makeGood(string s) {
        
        int n = s.size();
        int i;
        string ans;
        stack<char>st;
        for(i=0;i<n;i++)
        {
           if(st.size() == 0)
           {
               st.push(s[i]);
               continue;
           }
           if( st.top() == s[i] + 32 || st.top() + 32 == s[i])
           {
               st.pop();
           }
            else
            {
               st.push(s[i]);    
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