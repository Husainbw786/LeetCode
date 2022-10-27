class Solution {
public:
    int countAsterisks(string s) {
        
        int n = s.size();
        int i;
        int count_star = 0;
        int count_bar = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '|')
            {
                count_bar++;
            }
            if(count_bar % 2 == 0 && s[i] == '*')
            {
                count_star++;
            }
        }
        return count_star;
    }
};