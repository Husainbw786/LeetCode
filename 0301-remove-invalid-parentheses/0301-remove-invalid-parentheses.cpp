class Solution {
public:
    unordered_map<string,int>mp;
    vector<string>ans;
    int invalid(string s)
    {
        stack<char>st;
        int i;
        for(i=0;i<s.size();i++)
        {
            
            if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                  st.pop();  
                }
                else
                {
                  st.push(s[i]);
                }
            }
            
        }
        return st.size();
    }
    
    void solve(string s, int invalid_count)
    {
        if(mp[s] != 0)
        {
            return;
        }
        else
        {
            mp[s]++;
        }
        if(invalid_count < 0)
        {
            return;
        }
        if(invalid_count == 0)
        {
            if(!invalid(s))
            {
                ans.push_back(s);
            }
            return;
        }
        for(int i=0;i<s.size();i++)
        {
            string left = s.substr(0,i);
            string right = s.substr(i+1);
            solve(left+right,invalid_count-1);
        }
        return;
    }
    
    
    vector<string> removeInvalidParentheses(string s) {
     
        int n = s.size();
        int count = invalid(s);
        solve(s,count);
        return ans;
        
    }
};