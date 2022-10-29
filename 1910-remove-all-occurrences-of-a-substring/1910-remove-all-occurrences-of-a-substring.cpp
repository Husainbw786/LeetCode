class Solution {
public:
    
    bool check(stack<char>st, string part)
    {
        int m = part.size();
        int j = m-1;
        while( j >= 0 && st.top() == part[j])
        {
            st.pop();
            j--;
        }
        if(j == -1)
        {
            return true;
        }
        return false;
    }
    
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int n = s.size();
        int m = part.size();
        int i;
        for(i=0;i<n;i++)
        {
            st.push(s[i]);
            if(st.size() >= m)
            {
               if(check(st,part))
                {
                    int count = m;
                   while(count--)
                   {
                       st.pop();
                   }
                }
            }
        }
        string ans;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};