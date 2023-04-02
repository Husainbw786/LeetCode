class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        
        int n = s.size();
        int i;
        int maxi = 0;
        int count_zero = 0;
        int count_one = 0;
        int j = 0;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                continue;
            }
            else if(s[i] == '1')
            {
                int x = i-1;
                int y = i;
                while((x >= 0 && s[x] == '0') && (y < n && s[y] == '1'))
                {
                    count += 2;
                    x--;
                    y++;
                }
                maxi = max(count,maxi);
                count = 0;
            }
            
        }
        return maxi;
    }
};