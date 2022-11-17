class Solution {
public:
    int numSplits(string s) {
        
        int i;
        unordered_map<char,int>mp1,mp2;
        int n = s.size();
        for(i=1;i<n;i++)
        {
            mp2[s[i]]++;
        }
        mp1[s[0]]++;
        int count = 0;
        if(mp1.size() == mp2.size())
        {
            count++;
        }
        for(i=1;i<n;i++)
        {
            mp1[s[i]]++;
            mp2[s[i]]--;
            if(mp2[s[i]] == 0)
            {
                mp2.erase(s[i]);
            }
            if(mp1.size() == mp2.size())
            {
                count++;
            }
        }
        return count;
    }
};