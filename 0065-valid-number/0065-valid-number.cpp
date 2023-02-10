class Solution {
public:
    bool isNumber(string s) {
        
        int n = s.size();
        bool dot = false;
        bool minus = false;
        bool plus = false;
        bool ee = false;
        bool found = false;
        if(n == 1 && (s[0] == '+' || s[0] == '-' || s[0] == '.'))
        {
            return false;
        }
        if(n >= 2)
        {
            if(s[0] == '.' && (s[1] == 'e' || s[1] == 'E'))
            {
                return false;
            }
        }
        if(s[0] == 'E' || s[0] == 'e')
        {
            return false;
        }
        int i = 0;
        while(i < n)
        {
            if((s[i] == 'E' || s[i] == 'e') && !ee && (s[i+1] == '+' || s[i+1] == '-') )
            {
                i+=2;
                ee = true;
                if(i >= n)
                {
                    return false;
                }
                if(s[i] == '.' || s[i] == '-')
                {
                    return false;
                }
                if(!found)
                {
                    return false;
                }
                continue;
            }
            if((s[i] == 'E' || s[i] == 'e') && !ee)
            {
                ee = true;
                if(!found)
                {
                    return false;
                }
                i++;
                
                continue;
            }
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                return false;
            }
            else if((s[i] == '.' && dot) || (s[i] == '-' && minus) || (s[i] == '+' && plus) ) 
            {
                return false;
            }
            if(s[i] == '.' && !dot)
            {
                dot = true;
            }
            if(i > 0 && s[i] == '+')
            {
                return false;
            }
            if(i > 0 && s[i] == '-')
            {
                return false;
            }
            if(s[i] >= '0' && s[i] <= '9')
            {
                found = true;
            }
            if(minus && plus)
            {
                return false;
            }
            if( i > 0 && (s[i] == '+' || s[i] == '-') && i+1 < n && s[i+1] == '.')
            {
                return false;
            }
            if(ee && s[i] == '.')
            {
                return false;
            }
            i++;
        }
        
        if(s[n-1] == '-' || s[n-1] == '+' || s[n-1] == 'e' || s[n-1] == 'E')
        {
            return false;
        }
        if(s[n-1] == '.' && i > 1 && (s[n-2] == '+' || s[n-2] == '-'))
        {
            return false;
        }
        return true;
    }
};