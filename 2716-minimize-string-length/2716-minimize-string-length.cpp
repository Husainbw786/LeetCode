class Solution {
public:
    int minimizedStringLength(string s) {
        
        int n = s.size();
        int i;
        string ans = "";
        unordered_set<char>st;
        for(i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        return st.size();
    }
};