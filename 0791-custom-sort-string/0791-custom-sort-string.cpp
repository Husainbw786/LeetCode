class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,bool>mp;
        unordered_map<char,int>mp1,mp2;
        int n = order.size();
        int m = s.size();
        string ans = "";
        int i;
        for(i=0;i<n;i++)
        {
            mp[order[i]] = true;
        }
        for(auto x : s)
        {
            if(mp[x])
            {
                mp1[x]++;
            }
            else
            {
                mp2[x]++;
            }
        }
        s.clear();
        for(i=0;i<n;i++)
        {
            while(mp1[order[i]]--)
            {
                s += order[i];
            }
        }
        for(auto x : mp2)
        {
            while(x.second--)
            {
                s += x.first;
            }
        }
        return s;
    }
};