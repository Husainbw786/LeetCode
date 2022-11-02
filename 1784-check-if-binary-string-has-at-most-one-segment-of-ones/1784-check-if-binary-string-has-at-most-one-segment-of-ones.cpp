class Solution {
public:
    bool checkOnesSegment(string s) {
        
        int n = s.size();
        int i;
        bool flag = false;
        for(i=0;i<n;i++)
        {
            if(s[i] == '1' && !flag)
            {
                continue;
            }
            else
            {
                flag = true;
            }
            if(s[i] == '1' && flag)
            {
                return false;
            }
        }
        return true;
    }
};