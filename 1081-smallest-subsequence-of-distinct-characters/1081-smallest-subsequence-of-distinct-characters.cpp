class Solution {
public:
    string smallestSubsequence(string s) {
        
        int n = s.size();
        vector<int>count(26,0);
        vector<int>vis(26,0);
        int i;
        string ans = "";
        for(i=0;i<n;i++)
        {
         count[s[i] - 'a']++;   
        }
        
        for(i=0;i<n;i++)
        {
            count[s[i] - 'a']--;
            
            if(!vis[s[i] - 'a'])
            {
                while(ans.size() > 0 && ans.back() > s[i] && count[ans.back() - 'a'] > 0)
                {
                    vis[ans.back() - 'a'] = 0;
                    ans.pop_back();
                }
                ans += s[i];
                vis[s[i] - 'a'] = 1;
            }
        }
        return ans;
    }
};