class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
     
        int n = temp.size();
        vector<int>v;
        stack<int>st;
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                st.push(i);
                v.push_back(0);
            }
            else
            {
                while(!st.empty() && temp[st.top()] <= temp[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    st.push(i);
                    v.push_back(0);
                }
                else
                {
                    v.push_back(st.top() - i);
                    st.push(i);
                }
            }
        }
       reverse(v.begin(),v.end());
        return v;
    }
};