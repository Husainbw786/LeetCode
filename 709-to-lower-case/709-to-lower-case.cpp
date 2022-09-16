class Solution {
public:
    string toLowerCase(string s) {
        
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};