class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int i;
        int n = s.size();
        int count = 0;
        string ans = "";
        for(i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
                count++;
            }
            if(count == k)
            {
                break;
            }
            ans += s[i];
        }
        return ans;
    }
};