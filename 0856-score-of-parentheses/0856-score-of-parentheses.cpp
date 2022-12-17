class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int n = s.size();
        int depth = 0;
        int res = 0;
        char prev;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                depth++;
            }
            else
            {
                depth--;
                if(prev == '(')
                {
                    res += pow(2,depth);
                }
            }
            prev = s[i];
        }
        return res;
    }
};