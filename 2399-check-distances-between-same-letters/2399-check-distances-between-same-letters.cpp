class Solution {
public:
    bool checkDistances(string s, vector<int>& dis) {
     
        unordered_map<char,int>mp;
        int i;
        int n = s.size();
        vector<int>v(26,0);
        vector<bool>check(26,false);
        for(i=0;i<n;i++)
        {
            mp[s[i]] = i;
        }
        for(i=0;i<n;i++)
        {
            if(v[s[i] - 'a'] == 0 && check[s[i] - 'a'] == false)
            {
                int x = mp[s[i]] - i - 1;
                v[s[i] - 'a'] = x;
                check[s[i] - 'a'] = true;
            }
        }
        for(i=0;i<n;i++)
        { 
            if(v[s[i] - 'a'] != dis[s[i] - 'a'])
            {
                return false;
            }
        }
        return true;
        
    }
};