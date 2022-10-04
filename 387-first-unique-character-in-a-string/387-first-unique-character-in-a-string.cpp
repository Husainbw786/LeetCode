class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(i=0;i<s.size();i++)
        {
            if(mp[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};