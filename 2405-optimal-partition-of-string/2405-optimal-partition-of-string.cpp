class Solution {
public:
    int partitionString(string s) {
     
        unordered_map<char,int>mp;
        int i;
        int n = s.size();
        int count = 1;
        for(i=0;i<n;i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]]++;
            }
            else
            {
                count++;
                mp.clear();
                i--;
            }
        }
        return count;
    }
};