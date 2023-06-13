class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();
        int m = goal.size();
        if(n != m)
        {
            return false;
        }
        while(m--)
        {
            s += s[0];
            s = s.substr(1);
            if(goal == s)
            {
                return true;
            }
        }
        return false;
    }
};