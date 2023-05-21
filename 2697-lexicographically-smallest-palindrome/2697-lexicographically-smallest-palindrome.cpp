class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        int n = s.size();
        int i;
        int count = 0;
        for(i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
            {
                char c;
                c = min(s[n-i-1],s[i]);
                s[n-i-1] = c;
                s[i] = c;
                
            }
        }
        return s;
    }
};