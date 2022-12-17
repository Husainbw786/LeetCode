class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        string st = "";
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                st += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                st += tolower(s[i]);
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                st += s[i];
            }
        }
        int m = st.size();
        for(i=0;i<m/2;i++)
        {
            if(st[i] != st[m-i-1])
            {
                return false;
            }
        }
        return true;
    }
};