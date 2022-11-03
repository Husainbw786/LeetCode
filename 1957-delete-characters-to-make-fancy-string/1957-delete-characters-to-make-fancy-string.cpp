class Solution {
public:
    string makeFancyString(string s) {
        
        int n = s.size();
        string ans = "";
        int i;
        if(n <= 3)
        {
            if(s[0] == s[1] && s[1] == s[2])
            {
                s.pop_back();
                return s;
            }
            else
            {
                return s;
            }
        }
        bool flag = true;
        for(i=0;i<n-2;i++)
        {
            if(s[i] == s[i+1] && s[i+1] == s[i+2])
            {
                continue;
            }
            ans += s[i];
        }
        ans += s[n-2];
        ans += s[n-1];
        return ans;
    }
};