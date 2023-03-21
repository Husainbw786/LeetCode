class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        vector<int> vec,ans;
        for(int i=0;i<n;i++){
            if(asteroids[i]>0)
            {
                st.push(i);
            }
            else
            {
                int no=-1*asteroids[i];
                while(!st.empty() && no>asteroids[st.top()])
                {
                    st.pop();
                }
                if(!st.empty() && asteroids[st.top()]==no)
                {
                    st.pop();
                    continue;
                }
                if(st.empty())
                {
                    ans.push_back(i);
                }
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            vec.push_back(asteroids[ans[i]]);
        }
        return vec;
    }
};