class Solution {
public:
    string smallestNumber(string pattern) {
       
        string ans = "";
        int i=0,j=0;
        while(i <= pattern.size())
        {
            ans += '1' + i;
            if(pattern[i] == 'I' || i == pattern.size())
            {
                reverse(ans.begin() + j,ans.end());
                j = i+1;
            }
            i++;
        }
        return ans;
    }
};