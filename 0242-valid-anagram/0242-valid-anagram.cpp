class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        if(n != t.size())
        {
            return false;
        }
        int count_arr1[26] = {0};
        int count_arr2[26] = {0};
        int i;
        for(i=0;i<n;i++)
        {
            count_arr1[s[i] - 'a']++;
            count_arr2[t[i] - 'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(count_arr1[i] != count_arr2[i])
            {
                return false;
            }
        }
        return true; 
    }
};