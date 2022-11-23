class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int n = s.size();
        int i;
        int prev = 0;
        int curr = 1;
        int ans = 0;
        for(i=1;i<n;i++)
        {
            if(s[i] == s[i-1])
            {
                curr++;
            }
            else
            {
                ans += min(prev,curr);
                prev = curr;
                curr = 1;
            }
        }
        ans += min(prev,curr);
        return ans;
    }
};