class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int n = s1.size();
        string ans = "";
         for(int i=0;i<n;i++)
        {
            if(s1[i] == s2[i])
            {
                ans += s1[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};