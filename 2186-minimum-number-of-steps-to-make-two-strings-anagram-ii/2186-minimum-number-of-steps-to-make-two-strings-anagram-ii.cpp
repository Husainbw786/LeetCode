class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int i;
        int n = s.size();
        int m = t.size();
        for(i=0;i<n;i++)
        {
            mp1[s[i]]++;
        }
        for(i=0;i<m;i++)
        {
            mp2[t[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp2.find(s[i]) != mp2.end() && mp2[s[i]] > 0)
            {
                mp2[s[i]]--;
            }
        }
        for(i=0;i<m;i++)
        {
            if(mp1.find(t[i]) != mp1.end() && mp1[t[i]] > 0)
            {
                mp1[t[i]]--;
            }
        }
        int count = 0;
        for(auto x : mp1)
        {
            count += x.second;
        }
        for(auto x : mp2)
        {
            count += x.second;
        }
        return count;
    }
};