class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        int i;
        int n = strs.size();
        string ans = "";
        string first = strs[0];
        string last = strs[n-1];
        for(i=0;i<first.size();i++)
        {
            if(first[i] == last[i])
            {
                ans += first[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};