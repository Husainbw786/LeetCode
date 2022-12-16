class Solution {
public:
    string longestNiceSubstring(string s) {
        
        if(s.size() < 2)
        {
            return "";
        }
            
        int n = s.size();
        unordered_set<char>st;
        int i;
        for(i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        for(i=0;i<n;i++)
        {
            if(st.count(tolower(s[i])) == true && st.count(toupper(s[i])) == true)
            {
                continue;
            }
            string prev = longestNiceSubstring(s.substr(0,i));
            string next = longestNiceSubstring(s.substr(i+1));
            if(prev.size()>=next.size())
            {
                return prev;
            }
            else
            {
                return next;
            }
            
        }
        return s;
    }
};