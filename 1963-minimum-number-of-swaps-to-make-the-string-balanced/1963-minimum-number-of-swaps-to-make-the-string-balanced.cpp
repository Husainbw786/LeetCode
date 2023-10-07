class Solution {
public:
    int minSwaps(string s) {
        
        stack<char>st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '[')
            {
                st.push('[');
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        return (st.size() + 1)/2;
    }
};