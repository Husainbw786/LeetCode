class Solution {
public:
    
    bool Is_Nice(string s, int i, int j)
    {
        unordered_set<char>st;
        for(int k=i;k<=j;k++)
        {
            st.insert(s[k]);
        }
        for(int k=i;k<=j;k++)
        {
            if(st.find(toupper(s[k])) == st.end() || st.find(tolower(s[k])) == st.end() )
            {
                return false;
            }
        }
        return true;
    }
    
    string longestNiceSubstring(string s) {
        
        int n = s.size();
        int i,j;
        int ans = 0;
        string result = "";
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(Is_Nice(s,i,j) && j-i+1 > ans)
                {
                    ans = j-i+1;
                    result = s.substr(i,ans);
                }
            }
        }
        return result;
    }
};