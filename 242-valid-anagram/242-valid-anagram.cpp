class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
        {
            return false;
        }
        int freq[26] = {0};
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            freq[s[i] - 'a']++;
        }
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(freq[t[i] - 'a'] > 0)
            {
               
                freq[t[i] - 'a']--;
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