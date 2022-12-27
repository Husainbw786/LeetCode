class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>mp;
        int n = t.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[t[i]]++;
        }
        for(i=0;i<s.size();i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]]--;
            }
        }
        for(auto x : mp)
        {
            if(x.second == 1)
            {
                return x.first;
            }
        }
        return 0;
    }
};