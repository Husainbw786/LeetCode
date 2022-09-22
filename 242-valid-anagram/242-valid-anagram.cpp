class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
        {
            return false;
        }
        unordered_map<char,int>mp;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(mp.find(t[i]) != mp.end() && mp[t[i]] > 0)
            {
               
                mp[t[i]]--;
                count++;
            }
            else
            {
                return false;
            }
        }
        if(n == count)
        {
            return true;
        }
        return false;
        
    }
};