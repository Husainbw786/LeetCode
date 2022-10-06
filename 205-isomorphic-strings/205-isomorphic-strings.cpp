class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(! mp1[s[i]] &&  !mp2[t[i]])
            {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
            }
            else
            {
                if(mp1[s[i]] != t[i])
                {
                    return false;
                }
            }
            
        }
       return true;
    }
};