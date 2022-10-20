class Solution {
public:
    string greatestLetter(string s) {
        
        map<char,int>mp;
        int i;
        string ans = "";
        sort(s.begin(),s.end());
        int n = s.size();
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp.find(s[i]) != mp.end() && mp.find(s[i] - 32) != mp.end())
            {
                 ans = s[i] - 32;
            }
        }
       
        return ans;
    }
};