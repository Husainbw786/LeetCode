class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        
        string s = to_string(n);
        int i;
        int len = s.size();
        int break_point = len;
        for(i=0;i<len-1;i++)
        {
            if(s[i] > s[i+1])
            {
                break_point = i;
                break;
            }
        }
        if(break_point == len)
        {
            return n;
        }
        
        s[break_point]--;
        
        for(i=break_point-1;i>=0;i--)
        {
            if(s[i] > s[i+1])
            {
                s[i]--;
                s[i+1] = '9';
            }
        }
        for (i=break_point+1; i<len; i++)
        {
            s[i] = '9';
        }

        return stoi(s);
        
    }
};