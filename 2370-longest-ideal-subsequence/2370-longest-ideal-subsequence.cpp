class Solution {
public:
    int longestIdealString(string s, int k) {
        
        int n = s.size();
        int i,j;
        vector<int>v(26,0);
        int maxi = 1;
        
        for(i=0;i<n;i++)
        {
            int x = s[i] - 'a';
            int m = 1;
            for(j=0;j<26;j++)
            {
                if(abs(j - x) <= k)
                {
                    m = max(m,v[j] + 1);
                }
            }
            v[x] = m;
        }
        for(i=0;i<26;i++)
        {
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }
};