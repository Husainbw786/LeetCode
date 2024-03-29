class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>st;
        int n = pushed.size();
        vector<int>v;
        int i;
        int j = 0;
        for(i=0;i<n;i++)
        {
            bool flag = false;
            if(pushed[i] != popped[j])
            {
                st.push(pushed[i]);
            }
            else
            {
                j++;
                flag = true;
            }
            if(flag)
            {   
                while(!st.empty() && st.top() == popped[j] && j < n)
                {
                    st.pop();
                    j++;
                }
            }
            
        }
       
        if(st.empty())
        {
            return true;
        }
        return false;
    }
};