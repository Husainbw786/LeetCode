class Solution {
public:
    string removeDuplicates(string s) {
        
        int n = s.size();
        int i;
        string ans = "";
        for(i=0;i<n;i++)
        {
           if(s[i] == ans.back())
           {
               ans.pop_back();
           }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};