class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
        int count[256] = {0};
        int i = 0;
        int j = 0;
        int ans = 0;
        int len = s.size();
        while(j < len)
        {
            count[s[j]]++;
            while(count[s[j]] > 1)
            {
                count[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};