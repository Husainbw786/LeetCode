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
            string x;
            x += goal[goal.size()-1];
            x += goal;
            x.pop_back();
            if(x == s)
            {
                return true;
            }
            goal = x;
        }
        return false;
        
    }
};
