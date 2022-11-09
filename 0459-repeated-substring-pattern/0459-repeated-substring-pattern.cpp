class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        int i;
        string mix = s + s;
        for(i=1;i<n;i++)
        {
            string x = mix.substr(i,n);
            if(s == x)
            {
                return true;
            }
        }
        return false;
    }
};