class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i= 0;
        int j = 0;
        int n = t.size();
        int count = 0;
        while(i<n)
        {
            if(s[j] == t[i])
            {
                i++;
                j++;
                count++;
                continue;
            }
            else
            {
                i++;
            }
        }
        if(count == s.size())
        {
            return true;
        }
        return false;
    }
};