class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        int n = s.size();
        if(k > n)
        {
            return s;
        }
        int i;
        stack<pair<char,int>>st;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else if(st.top().first == s[i])
            {
                st.top().second += 1;
                if(st.top().second == k)
                {
                    st.pop();
                }
            }
            else
            {
                st.push({s[i],1});
            }
        }
        string ans = "";
        while(!st.empty())
        {
            int x = st.top().second;
            while(x--)
            {
                ans += st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};