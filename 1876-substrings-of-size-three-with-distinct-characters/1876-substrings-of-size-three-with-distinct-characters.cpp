class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int i;
        int n = s.size();
        if(n < 3)
        {
            return 0;
        }
        int count = 0;
        for(i=0;i<n-2;i++)
        {
            if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2])
            {
                count++;
            }
        }
        return count;
            
    }
};