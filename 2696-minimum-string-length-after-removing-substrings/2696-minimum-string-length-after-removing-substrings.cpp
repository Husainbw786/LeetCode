class Solution {
public:
    int minLength(string s) {
        
        stack<char>st;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
           if(st.empty())
           {
               st.push(s[i]);
               continue;
           }
           else if(!st.empty() && s[i] == 'B')
           {
               if(st.top() == 'A')
               {
                   st.pop();
                   continue;
               }
           }
            else if(s[i] == 'D')
            {
                if(!st.empty() && st.top() == 'C')
                {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
            
        }
        string temp = "";
        while(!st.empty())
        {
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp.size();
        
        
    }
};