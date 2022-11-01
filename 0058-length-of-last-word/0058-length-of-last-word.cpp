class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        reverse(s.begin(),s.end());
        int count = 0;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i] == ' ' && count != 0)
            {
                break;
            }
            if(s[i] == ' ')
            {
                continue;
            }
            else if(s[i] != ' ')
            {
                count++;
            }
        }
        return count;
    }
};