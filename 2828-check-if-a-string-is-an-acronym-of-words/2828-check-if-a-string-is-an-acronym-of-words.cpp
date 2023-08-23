class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
     
        string ans = "";
        int i;
        int n = words.size();
        for(i=0;i<n;i++)
        {
            ans += words[i][0];
        }
        if(ans == s)
        {
            return true;
        }
        return false;
    }
};