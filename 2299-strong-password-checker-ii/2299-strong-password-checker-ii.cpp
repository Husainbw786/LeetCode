class Solution {
public:
    bool strongPasswordCheckerII(string pass) {
        
        bool lowercase = false;
        bool uppercase = false;
        bool digit = false;
        bool special = false;
        int n = pass.size();
        int i;
        bool check = false;
        if(n < 8)
        {
            return false;
        }
        for(i=0;i<n;i++)
        {
            if(pass[i] >= 'a' && pass[i] <= 'z')
            {
                lowercase = true;
            }
            if(pass[i] >= 'A' && pass[i] <= 'Z')
            {
                uppercase = true;
            }
            if(pass[i] >= '0' && pass[i] <= '9')
            {
                digit = true;
            }
            if(pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '^'  || pass[i] == '&' || pass[i] == '*' ||                    pass[i] == '(' || pass[i] == ')' || pass[i] == '-' || pass[i] == '+')
            {
                special = true;
            }
            if((i < n-1) && (pass[i] == pass[i+1]))
            {
                check = true;
            }
        }
         if(pass[n-2] == pass[n-1])
           {
               check = true;
           }
          if(check)
           {
             return false;
           }
          if(uppercase && lowercase && digit && special)
           {
               return true;
           }
        return false;
    }
};