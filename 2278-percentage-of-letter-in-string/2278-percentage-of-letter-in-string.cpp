class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        unordered_map<char,int>mp;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int  count = mp[letter];
        int ans = (count * 100) / n;
        return ans;
    }
};