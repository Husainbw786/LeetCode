class Solution {
public:
    int myAtoi(string s) {
        
        int n = s.size();
        int i = 0;
        long long int ans = 0;
        while(s[i] == ' ')
        {
           i++;
        }
        bool minus = false;
        bool plus = false;
        bool found = false;
        bool zero = false;
        int count = 0;
        while(i < n)
        {
            if(!found && s[i] == '0')
            {
                i++;
                zero = true;
                continue;
            }
            if( (s[i] == '-' || s[i] == '+' || s[i] == '.') && zero)
            {
                break;
            }
            if(s[i] == '+' || s[i] == '-')
            {
                count++;
            }
            if(s[i] == '+' && !found && !plus)
            {
                plus = true;
            }
            else if(s[i] == '-' && !found && !minus )
            {
                minus = true;
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                found = true;
                ans = ans * 10 + (s[i] - '0');
            }
            else if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '.' || (s[i] == '+' && plus) || (s[i] == '-' && minus) || s[i] == ' ')
            {
                break;
            }
            if(ans > INT_MAX)
            {
                break;
            }
            if(count > 1)
            {
                break;
            }
            i++;
        }
        if(minus)
        {
            ans = ans*-1;
        }
        if(ans > INT_MAX)
        {
            ans = INT_MAX;
        }
        bool mini = false;
        
        if(ans <= INT_MIN)
        {
            ans = INT_MIN;
            mini = true;
        }
        if(!mini)
        {
           return ans; 
        }
        return ans = -2147483648;
    }
};