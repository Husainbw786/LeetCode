class Solution {
public:
    bool checkString(string s) {
        
        bool flag = false;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == 'a' && flag)
            {
                return false;
            }
            if(s[i] == 'a')
            {
                continue;
            }
            else if(s[i] == 'b')
            {
                flag = true;
            }
        }
        return true;
    }
};