class Solution {
public:
    bool squareIsWhite(string s) {
        string temp = "";
        if(s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'g')
        {
             temp = s[1];
            int x = stoi(temp);
            if(x % 2 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            temp = s[1];
            int x = stoi(temp);
            if(x % 2 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
};