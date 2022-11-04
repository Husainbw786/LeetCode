class Solution {
public:
    int secondHighest(string s) {
        
        set<int>st;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                int x = s[i] - '0';
                st.insert(x); 
            }
        }
        int ans = -1;
        vector<int>v;
        for(auto x : st)
        {
            v.push_back(x);
        }
        n = v.size();
        if(n <= 1)
        {
            return -1;
        }
        ans = v[n-2];
        return ans;
    }
};
