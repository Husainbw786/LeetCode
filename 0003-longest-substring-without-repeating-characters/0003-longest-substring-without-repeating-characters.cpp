class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int i,j;
        i = 0;
        j = 0;
        int maxi = 0;
        unordered_map<char,int>mp;
        while(j < n)
        {
           mp[s[j]]++;
           while(mp[s[j]] > 1)
           {
               mp[s[i]]--;
               i++;
           }
           maxi = max(j-i+1,maxi);
           j++;
        }
        return maxi;
        
    }
};