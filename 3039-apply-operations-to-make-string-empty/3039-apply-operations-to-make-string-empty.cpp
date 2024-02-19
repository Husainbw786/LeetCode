class Solution {
public:
    string lastNonEmptyString(string s) {
        
       unordered_map<char,int>mp;
        int i;
        int n = s.size();
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
            maxi = max(mp[s[i]],maxi);
        }
        string ans = "";
        for(i=n-1;i>=0;i--)
        {
            if(mp[s[i]] == maxi)
            {
                ans += s[i];
                mp[s[i]]--;
            }
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};