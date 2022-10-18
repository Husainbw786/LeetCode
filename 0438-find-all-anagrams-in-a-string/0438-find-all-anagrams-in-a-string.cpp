class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>S_hash(26,0);
        vector<int>P_hash(26,0);
        vector<int>ans;
        int n = s.size();
        int m = p.size();
        if(n < m)
        {
            return ans;
        }
        int i = 0;
        int j = 0;
        while(j < m)
        {
            P_hash[p[j] - 'a']++;
            S_hash[s[j] - 'a']++;
            j++;
        }
        j--;
        while(j < n)
        {
            if(P_hash == S_hash)
            {
                ans.push_back(i);
            }
            j++;
            if(j != n)
            {
                S_hash[s[j] - 'a']++;
                S_hash[s[i] - 'a']--;
                i++;
            }
        }
        return ans;
        
        
    }
};