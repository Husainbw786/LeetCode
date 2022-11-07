class Solution {
public:
    int partitionString(string s) {
     
        unordered_set<char>st;
        int i;
        int n = s.size();
        int count = 1;
        for(i=0;i<n;i++)
        {
            if(st.find(s[i]) == st.end())
            {
                st.insert(s[i]);
            }
            else
            {
                count++;
                st.clear();
                i--;
            }
        }
        return count;
    }
};