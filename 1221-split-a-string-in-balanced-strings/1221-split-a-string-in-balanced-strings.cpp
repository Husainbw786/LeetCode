class Solution {
public:
    int balancedStringSplit(string s) {
        
        int l_count = 0;
        int r_count = 0;
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'R')
            {
                r_count++;
            }
            else
            {
                l_count++;
            }
            if(l_count == r_count)
            {
                ans++;
            }
        }
        return ans;
    }
};