class Solution {
public:
    bool areOccurrencesEqual(string s) {
     
        unordered_map<char,int>mp;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<n-1;i++)
        {
            if(mp[s[i]] != mp[s[i+1]])
            {
                return false;
            }
        }
        return true;
    }
};